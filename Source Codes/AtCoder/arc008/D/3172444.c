#include<stdio.h>
#include<stdlib.h>

typedef struct oishikunaru{
  double a,b;
} node;

const node id={1.0,0.0};

void func(node *c,const node *a,const node *b){
  double p=a->a;
  double q=a->b;
  double r=b->a;
  double s=b->b;
  c->a=p*r;
  c->b=r*q+s;
  return;
}

typedef struct segmentTreePointUpdateRangeAns{
  node *array;
  int size;
  node e;
  void (*func)(node *c,const node *a,const node *b);
} segTree;

segTree* newSegmentTree(int n,const node *e,void (*f)(node *c,const node *a,const node *b)){
  segTree *res=(segTree *)malloc(sizeof(segTree));
  int k=1;
  while(k<n) k*=2;
  res->array=(node *)malloc(sizeof(node)*2*k);
  res->size=k;
  res->e=*e;
  res->func=f;
  int i;
  for(i=1;i<2*k;i++) res->array[i]=*e;
  return res;
}

void update(segTree *seg,int index,node *v){
  node *s=seg->array;
  int k=seg->size+index;
  s[k]=*v;
  k/=2;
  while(k>=1){
    seg->func(s+k,s+2*k,s+2*k+1);
    k/=2;
  }
  return;
}

//[l,r)
void query(segTree *seg,int l,int r,node *res){
  int size=seg->size;
  node *a=seg->array;
  node s=seg->e;
  node t=seg->e;
  for(l+=size,r+=size;l<r;l/=2,r/=2){
    if(l&0x01) seg->func(&s,&s,a+l++);
    if(r&0x01) seg->func(&t,a+(--r),&t);
  }
  seg->func(res,&t,&s);
  return;
}

typedef long long int int64;
int cmp(const void *a,const void *b){
  int64 p=*(int64 *)a;
  int64 q=*(int64 *)b;
  return p==q?0:p<q?-1:1;
}

int toIndex(int64 *za,int len,int64 v){
  int l=0;
  int r=len;
  while(r-l>1){
    int m=(l+r)/2;
    if(za[m]<=v){
      l=m;
    } else {
      r=m;
    }
  }
  return l;
}

void run(void){
  int n,m;
  scanf("%d%d",&n,&m);
  if(m==0){
    printf("1\n1\n");
    return;
  }
  int64 *p=(int64 *)malloc(sizeof(int64)*m);
  double *a=(double *)malloc(sizeof(double)*m);
  double *b=(double *)malloc(sizeof(double)*m);
  int i;
  for(i=0;i<m;i++){
    scanf("%lld%lf%lf",p+i,a+i,b+i);
  }
  int64 *za=(int64 *)malloc(sizeof(int64)*m);
  for(i=0;i<m;i++) za[i]=p[i];
  qsort(za,m,sizeof(int64),cmp);
  int len=0;
  i=0;
  while(i<m){
    za[len++]=za[i++];
    while(i<m && za[len-1]==za[i]) i++;
  }
  segTree *seg=newSegmentTree(len,&id,func);
  double min=1.0;
  double max=1.0;
  for(i=0;i<m;i++){
    node t={a[i],b[i]};
    update(seg,toIndex(za,len,p[i]),&t);
    query(seg,0,len,&t);
    double s=t.a+t.b;
    if(s<min) min=s;
    if(s>max) max=s;
  }
  printf("%.6lf\n%.6lf\n",min,max);
  return;
}

int main(void){
  run();
  return 0;
} 