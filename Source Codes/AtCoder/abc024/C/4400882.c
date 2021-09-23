#include <stdio.h>

int main(void){
  int N,D,K;
  scanf("%d%d%d",&N,&D,&K);

  int L[D],R[D];
  for(int i = 0;i < D;i++) scanf("%d%d",&L[i],&R[i]);

  int S,T;
  for(int i = 0;i < K;i++){
    scanf("%d%d",&S,&T);
    for(int j = 0;;j++){
      if(S < T){
        if(L[j] <= S && S < R[j]){
          if(L[j] <= T && T <= R[j]){
            printf("%d\n",j+1);
            break;
          }
          S = R[j];
        }
      }else{
        if(L[j] < S && S <= R[j]){
          if(L[j] <= T && T <= R[j]){
            printf("%d\n",j+1);
            break;
          }
          S = L[j];
        }
      }
    }
  }

  return 0;
} 