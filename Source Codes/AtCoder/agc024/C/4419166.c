#include<stdio.h>
int N, i;
int A[200000];
long long int ans;

int main(){
  scanf("%d", &N);
  for(i=0; i<N; i++){
    scanf("%d", A+i);
  }
  if(A[0] != 0){
    printf("-1\n");
    return 0;
  }
  for(i=0; i<N-1; i++){
    if(A[i]+1 < A[i+1]){
      printf("-1\n");
      return 0;
    }
  }
  for(i=1; i<N; i++){
    if(A[i-1]+1 == A[i]){
      ans++;
    }else{
      ans += A[i];
    }
  }
  printf("%lld\n", ans);
} 