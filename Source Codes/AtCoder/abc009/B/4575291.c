#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *b,const void *a){
  return *(long*)a-*(long*)b;
}

int main(void){
  int N;
  scanf("%d",&N);

  int A[N];
  for(int i = 0;i < N;i++) scanf("%d",&A[i]);
  qsort(A,N,sizeof(int),compare_int);

  int past = A[0];
  for(int i = 1;i < N;i++){
    if(A[i] != past){
      printf("%d\n",A[i]);
      break;
    }
  }


  return 0;
} 