#include<stdio.h>
int dif(int a, int b);
int N, M, A[50], B[50], C[50], D[50], min, i, j;
int main(){
  scanf("%d%d", &N, &M);
  for(i=0; i<N; i++){
    scanf("%d%d", A+i, B+i);
  }
  for(j=0; j<M; j++){
    scanf("%d%d", C+j, D+j);
  }
  for(i=0; i<N; i++){
    min = 0;
    for(j=0; j<M; j++){
      if(dif(A[i], C[j])+dif(B[i], D[j]) < dif(A[i], C[min])+dif(B[i], D[min])){
        min=j;
      }
    }
    printf("%d\n", min+1);
  }
}
int dif(int a, int b){
  return a<b?b-a:a-b;
} 