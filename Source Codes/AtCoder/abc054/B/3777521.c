#include <stdio.h>

int main(){
  int N, M;
  char A[60][60] = {};
  char B[60][60] = {};

  scanf("%d %d", &N, &M);
  for(int i = 0; i < N; i++){
    scanf("%s", A[i]);
  }
  for(int i = 0; i < M; i++){
    scanf("%s", B[i]);
  }

  for(int i = 0; i <= N - M; i++){
    for(int j = 0; j <= N - M; j++){

      int flag = 1;
      for(int k = 0; k < M; k++){
        for(int l = 0; l < M; l++){

          if(A[i+k][j+l] != B[k][l]){
            flag = 0;
            break;
          }

        }
      }
      if(flag == 1){
        printf("Yes\n");
        return 0;
      }

    }
  }

  printf("No\n");
  return 0;
} 