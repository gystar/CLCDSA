#include <math.h>
#include <stdio.h>  
#include <stdlib.h>

int compare_int(const void *a, const void *b){
    return *(long int*)a - *(long int*)b;
}

int main(){
  int i,N,M;
  long long ANS=0;
  scanf("%d %d", &N, &M);
  long int A[N],S[N+1];
  long int s=0;
  S[N]=0;
  for(i=0;i<N;i++){
    scanf("%ld", &A[i]);
    S[i]=(s+A[i])%M;
    s=(s+A[i])%M;
  }

  qsort(S, N+1, sizeof(long int), compare_int);

  long long int n=1;
  for(i=0;i<=N;i++){
    if(S[i+1]==S[i]){
      n++;
    }else{
      ANS=ANS+(n-1)*n/2;
      n=1;
    }
  }
  ANS=ANS+n*(n-1)/2;
  printf("%lld", ANS);
  return 0;
} 