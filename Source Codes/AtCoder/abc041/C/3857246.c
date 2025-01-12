#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define SENTINEL 10000000000

void merge(long long A[], long long B[], long long left, long long mid, long long right){
  long long n1, n2, i, j, k;
  long long *L,*R, *Lb, *Rb;
  
  n1 = mid-left;
  n2 = right-mid;
  
  L = (long long*)malloc(sizeof(long long) *(n1 + 1));
  R = (long long*)malloc(sizeof(long long) *(n2 + 1));
  Lb = (long long*)malloc(sizeof(long long) *(n1 + 1));
  Rb = (long long*)malloc(sizeof(long long) *(n2 + 1));
  
  for(i = 0; i <= n1 - 1; i++){
    L[i] = A[left + i];
    Lb[i] = B[left + i];
  }
  for(j = 0; j <= n2 - 1; j++){
    R[j] = A[mid + j];
    Rb[j] = B[mid + j];
  }
  
  L[n1] = SENTINEL;
  R[n2] = SENTINEL;
  Lb[n1] = SENTINEL;
  Rb[n2] = SENTINEL;
  
  i = 0;
  j = 0;
  
  for(k = left; k <= right - 1; k++){
   if(L[i] <= R[j]){
      A[k] = L[i];
      B[k] = Lb[i];
      i++;
    }
    else{
      A[k] = R[j];
      B[k] = Rb[j];
      j++;
    }
  }
  free(L);
  free(R);
  free(Lb);
  free(Rb);
}

void mergeSort(long long A[], long long B[], long long left, long long right){
  long long mid;
  
  if(left + 1 < right){
    mid=(left + right)/2;
    mergeSort(A,B, left, mid);
    mergeSort(A,B, mid, right);
    merge(A,B, left, mid, right);
  }
}
 
int main(void){

  long long N, i;

  scanf("%lld", &N);

  long long a[N], b[N];

  for(i = 0; i < N; i++){
    scanf("%lld", &a[i]);
    b[i] = i;
  }

  mergeSort(a, b, 0, N);

  for(i = N - 1; i >= 0; i--){
    printf("%lld\n", b[i] + 1);
  }
   
  return 0;
} 