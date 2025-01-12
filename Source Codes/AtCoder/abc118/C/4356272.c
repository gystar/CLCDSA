#include<stdio.h>
#include<stdlib.h>

int comp(const void *a, const void *b){
  return *(int*)a - *(int*)b;
}

int main(){
  int N;
  scanf("%d", &N);
  int A[N];
  int i;

  for(i = 0; i < N; i++){
    scanf("%d", &A[i]);
  }

  qsort(A, N, sizeof(int), comp);
  int c, j;

  while(A[N-2] != 0){
    i = 0;
    while(A[i] == 0) i++;
    c = A[i];
    for(j = i + 1; j < N; j++){
      A[j] = A[j] % c;
    }
    qsort(A, N, sizeof(int), comp);
  }

  printf("%d\n", c);

  return 0;
} 