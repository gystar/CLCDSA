#include <stdio.h>
#include <stdlib.h>
#define keytype int
#define datatype int

//static int malloc_cont;
//static int free_cont;

typedef struct node_sub{
	keytype key; //???
	datatype val; //?
	int ele_num; //?????????
	int height; //????
	struct node_sub *left; //?????????
	struct node_sub *right; //?????????
}node;

typedef struct {
	node *root;
}AVL_tree;

int max(int a, int b){
	if(a > b){
		return a;
	}
	else{
		return b;
	}
}

//????
//a < b ?????
//a = b ??0
//a > b ?????
int compare(keytype a, keytype b){
	return a - b;
}

int ele_num(node *r){
	if(r == NULL){
		return 0;
	}
	else{
		return r->ele_num;
	}
}

int height(node *r){
	if(r == NULL){
		return 0;
	}
	else{
		return r->height;
	}
}

//t???????????
//datatype??????????????free??
void release(node *r){
	free(r);
//	free_cont++;
}

node *build_node(keytype key, datatype val, node *left, node *right){
	node *newr;
	int left_h = height(left);
	int right_h = height(right);
	if(left_h > right_h + 1){
		node *ll = left->left;
		node *lr = left->right;
		if(height(ll) < height(lr)){
			newr = build_node(lr->key, lr->val, build_node(left->key, left->val, ll, lr->left), build_node(key, val, lr->right, right));
			release(lr);
		}
		else{
			newr = build_node(left->key, left->val, ll, build_node(key, val, lr, right));
		}
		release(left);
	}
	else if(right_h > left_h + 1){
		node *rr = right->right;
		node *rl = right->left;
		if(height(rr) < height(rl)){
			newr = build_node(rl->key, rl->val, build_node(key, val, left, rl->left), build_node(right->key, right->val, rl->right, rr));
			release(rl);
		}
		else{
			newr = build_node(right->key, right->val, build_node(key, val, left, rl), rr);
		}
		release(right);
	}
	else{
//		malloc_cont++;
		newr = (node *)malloc(sizeof(node));
		newr->key = key;
		newr->val = val;
		newr->ele_num = ele_num(left) + ele_num(right) + 1;
		newr->height = max(left_h, right_h) + 1;
		newr->left = left;
		newr->right = right;
	}
	return newr;
}

node *find_sub(keytype key, node *r){
	if(r == NULL){
		return NULL;
	}
	int comp = compare(key, r->key);
	if(comp == 0){
		return r;
	}
	else if(comp < 0){
		return find_sub(key, r->left);
	}
	else{
		return find_sub(key, r->right);
	}
}

node *kth_smallest_sub(int k, node *r){
	if(r == NULL || k < 1){
		printf("In function 'kth_smallest_sub':\nargument 'k' is out of range\n");
		return NULL;
	}
	else if(r->ele_num < k){
		printf("In function 'kth_smallest_sub':\nargument 'k' is out of range\n");
		return NULL;
	}
	else if(ele_num(r->left) == k - 1){
		return r;
	}
	else if(ele_num(r->left) > k - 1){
		return kth_smallest_sub(k, r->left);
	}
	else{
		return kth_smallest_sub(k - ele_num(r->left) - 1, r->right);
	}
}

int num_less_than_sub(keytype key, node *r){
	if(r == NULL){
		return 0;
	}
	else if(compare(key, r->key) < 0){
		return num_less_than_sub(key, r->left);
	}
	else{
		return ele_num(r->left) + num_less_than_sub(key, r->right) + 1;
	}
}

node *next_largest_sub(keytype key, node *r){
	if(r == NULL){
		return NULL;
	}
	else if(compare(key, r->key) <= 0){
		return next_largest_sub(key, r->left);
	}
	else{
		node *candidate = next_largest_sub(key, r->right);
		if(candidate == NULL){
			return r;
		}
		else{
			return candidate;
		}
	}
}

node *next_smallest_sub(keytype key, node *r){
	if(r == NULL){
		return NULL;
	}
	else if(compare(key, r->key) >= 0){
		return next_smallest_sub(key, r->right);
	}
	else{
		node *candidate = next_smallest_sub(key, r->left);
		if(candidate == NULL){
			return r;
		}
		else{
			return candidate;
		}
	}
}

node *insert_sub(keytype key, datatype val, node *r){
	node *newr;
	if(r == NULL){
		newr = build_node(key, val, NULL, NULL);
	}
	else{
		int comp = compare(key, r->key);
		if(comp == 0){
			printf("In function 'insert_sub':\nkey '%d' already exists\n", key);
			newr = build_node(r->key, val, r->left, r->right);
		}
		else if(comp < 0){
			newr = build_node(r->key, r->val, insert_sub(key, val, r->left), r->right);
		}
		else{
			newr = build_node(r->key, r->val, r->left, insert_sub(key, val, r->right));
		}
		release(r);
	}
	return newr;
}

node *erase_sub(keytype key, node *r){
	node *newr;
	if(r == NULL){
		printf("In function 'erase_sub':\nkey '%d' doesn't exist\n", key);
		newr = NULL;
	}
	else{
		int comp = compare(key, r->key);
		if(comp == 0){
			if(r->left == NULL && r->right == NULL){
				newr = NULL;
			}
			else if(r->right == NULL){
				newr = r->left;
			}
			else if(r->left == NULL){
				newr = r->right;
			}
			else{
				node *next_larger = kth_smallest_sub(1, r->right);
				newr = build_node(next_larger->key, next_larger->val, r->left, erase_sub(next_larger->key, r->right));
			}
		}
		else if(comp < 0){
			newr = build_node(r->key, r->val, erase_sub(key, r->left), r->right);
		}
		else{
			newr = build_node(r->key, r->val, r->left, erase_sub(key, r->right));
		}
		release(r);
	}
	return newr;
}

void storeall_sub(keytype *array, int k, node *r){
	if(r != NULL){
		storeall_sub(array, k, r->left);
		array[k + ele_num(r->left)] = r->key;
		storeall_sub(array, k + ele_num(r->left) + 1, r->right);
	}
}

void outall_sub(node *r){
	if(r != NULL){
		outall_sub(r->left);
		printf("(key, val, ele_num, height) = (%d, %d, %d, %d)\n", r->key, r->val, r->ele_num, r->height);
		outall_sub(r->right);
	}
}

//AVL_tree?????
AVL_tree *make_AVL_tree(){
	AVL_tree *t = (AVL_tree *)malloc(sizeof(AVL_tree));
	t->root = NULL;
	return t;
}

//t?????????????
int element_num(AVL_tree *t){
	return ele_num(t->root);
}

//????key?????????????
//????NULL???
node *find(keytype key, AVL_tree *t){
	return find_sub(key, t->root);
}

//?????k???key?????????????
//1 ? k ? ele_num(t->root) ?????????NULL???(????????)
node *kth_smallest(int k, AVL_tree *t){
	return kth_smallest_sub(k, t->root);
}

//????key???????????
int num_less_than(keytype key, AVL_tree *t){
	return num_less_than_sub(key, t->root);
}

//key???????????????????????????
//????NULL???
node *next_largest(keytype key, AVL_tree *t){
	return next_largest_sub(key, t->root);
}

//key???????????????????????????
//????NULL???
node *next_smallest(keytype key, AVL_tree *t){
	return next_smallest_sub(key, t->root);
}

//???key, ?val?????????
//?????????????????(????????)
void insert(keytype key, datatype val, AVL_tree *t){
	t->root = insert_sub(key, val, t->root);
}

//???key?????????
//?????????????(????????)
void erase(keytype key, AVL_tree *t){
	t->root = erase_sub(key, t->root);
}

//?????key???????????????
keytype *storeall(AVL_tree *t){
	keytype *array = (keytype *)malloc(sizeof(keytype) * element_num(t));
	storeall_sub(array, 0, t->root);
	return array;
}

//????????key??????????
void outall(AVL_tree *t){
	outall_sub(t->root);
}

int main(){
	int N, K, i;
	scanf("%d%d", &N, &K);
	int *X = (int *)malloc(sizeof(int) * N);
	for(i = 0; i < N; i++){
		scanf("%d", &X[i]);
	}
	AVL_tree *t = make_AVL_tree();
	for(i = 0; i < K - 1; i++){
		insert(X[i], i, t);
	}
	for(i = K - 1; i < N; i++){
		insert(X[i], i, t);
		printf("%d\n", kth_smallest(K, t)->val + 1);
	}
	return 0;
} 