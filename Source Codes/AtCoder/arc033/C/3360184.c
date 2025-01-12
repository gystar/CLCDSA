#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//refer : http://dopal.cs.uec.ac.jp/okamotoy/lect/2005/DSA/avl.pdf

typedef struct AVLTreeNode{
  void *val;
  int size;
  int rank;
  int bias;
  struct AVLTreeNode *left;
  struct AVLTreeNode *right;
} AVLNode;

typedef struct AVLTreeHead{
  AVLNode *root;
  size_t valSize;
  int (*cmp)(const void *,const void *);
} AVLTree;

int getRank(AVLNode *t){
  return t==NULL?0:t->rank;
}

int getSize(AVLNode *t){
  return t==NULL?0:t->size;
}

int getBias(AVLNode *t){
  return t==NULL?0:t->bias;
}

AVLNode* newAVLNode(void *v,size_t size){
  AVLNode *res=(AVLNode *)malloc(sizeof(AVLNode));
  res->val=malloc(size);
  memcpy(res->val,v,size);
  res->size=1;
  res->rank=1;
  res->bias=0;
  res->left=NULL;
  res->right=NULL;
  return res;
}

void freeAVLNode(AVLNode *r){
  free(r->val);
  free(r);
  return;
}

AVLTree* newAVLTree(size_t size,int (*cmp)(const void *,const void *)){
  AVLTree *res=(AVLTree *)malloc(sizeof(AVLTree));
  res->root=NULL;
  res->valSize=size;
  res->cmp=cmp;
  return res;
}

void update(AVLNode *t){
  if(t==NULL) return;
  int lrank=getRank(t->left);
  int rrank=getRank(t->right);
  t->rank=1+(lrank>rrank?lrank:rrank);
  t->size=1+getSize(t->left)+getSize(t->right);
  t->bias=lrank-rrank;
  return;
}

AVLNode* leftRotate(AVLNode *v){
  AVLNode *u=v->right;
  v->right=u->left;
  u->left=v;
  update(v);
  update(u);
  return u;
}

AVLNode* rightRotate(AVLNode *u){
  AVLNode *v=u->left;
  u->left=v->right;
  v->right=u;
  update(u);
  update(v);
  return v;
}

AVLNode* balance(AVLNode *t){
  int b=getBias(t);
  if(b<=-2){
    if(getBias(t->right)<=0){
      t=leftRotate(t);
    } else {
      t->right=rightRotate(t->right);
      t=leftRotate(t);
    }
  } else if(b>=2){
    if(getBias(t->left)>=0){
      t=rightRotate(t);
    } else {
      t->left=leftRotate(t->left);
      t=rightRotate(t);
    }
  }
  return t;
}

AVLNode* insert_func(AVLNode *r,void *v,AVLTree *t){
  if(r==NULL) return newAVLNode(v,t->valSize);
  if(t->cmp(r->val,v)>=0){
    r->left=insert_func(r->left,v,t);
  } else {
    r->right=insert_func(r->right,v,t);
  }
  update(r);
  return balance(r);
}

void insert(AVLTree *t,void *v){
  //t->root=insert_func(t->root,v,t);
  AVLNode *p[32];
  AVLNode **next[32];
  int (*cmp)(const void *,const void *)=t->cmp;
  p[0]=t->root;
  int top;
  for(top=0;p[top]!=NULL;top++){
    if(cmp(p[top]->val,v)>=0){
      next[top]=&(p[top]->left);
      p[top+1]=p[top]->left;
    } else {
      next[top]=&(p[top]->right);
      p[top+1]=p[top]->right;
    }
  }
  p[top]=newAVLNode(v,t->valSize);
  for(--top;top>=0;top--){
    *next[top]=p[top+1];
    update(p[top]);
    p[top]=balance(p[top]);
  }
  t->root=p[0];
  return;
}

AVLNode* erase_func_max(AVLNode *r,AVLNode **max){
  if(r->right==NULL){
    *max=r;
    return r->left;
  }
  r->right=erase_func_max(r->right,max);
  update(r);
  return balance(r);
}

AVLNode* erase_func(AVLNode *r,void *v,AVLTree *t){
  if(r==NULL) return NULL;
  int c=t->cmp(r->val,v);
  if(c==0){
    AVLNode *f=r;
    if(r->left==NULL){
      r=r->right;
    } else if(r->right==NULL){
      r=r->left;
    } else {
      AVLNode *max;
      r->left=erase_func_max(r->left,&max);
      max->left=r->left;
      max->right=r->right;
      r=max;
    }
    freeAVLNode(f);
  } else if(c>0){
    r->left=erase_func(r->left,v,t);
  } else {
    r->right=erase_func(r->right,v,t);
  }
  update(r);
  return balance(r);
}

//????????????????????
void erase(AVLTree *t,void *v){
  t->root=erase_func(t->root,v,t);
}

//k??????????
void search(AVLTree *t,int k,void *res){
  AVLNode *r=t->root;
  while(r!=NULL){
    if(getSize(r->left)<k){
      k-=getSize(r->left);
      if(k==1){
	memcpy(res,r->val,t->valSize);
	return;
      }
      k--;
      r=r->right;
    } else {
      r=r->left;
    }
  }
  //1<=k<=getSize(t->root) ????k?????????????
}

int cmp(const void *a,const void *b){
  return *(int *)a-*(int *)b;
}

void run(void){
  int q;
  scanf("%d",&q);
  AVLTree *t=newAVLTree(sizeof(int),cmp);
  while(q--){
    int type,x;
    scanf("%d%d",&type,&x);
    if(type==1){
      insert(t,&x);
    } else {
      search(t,x,&x);
      erase(t,&x);
      printf("%d\n",x);
    }
  }
}

int main(void){
  run();
  return 0;
} 