#include <stdio.h>
int main(){
  int H, W;
  scanf("%d%d", &H, &W);
  char field[H+2][W+2];
  char count;
  for (int i=1; i<H+1 ;i++){
    for (int j=0; j<W+1; j++){
      scanf("%c", &field[i][j]);
    }
  }
  for (int i=1; i<H+1; i++){
    for (int j=1; j<W+1; j++){
      count='0';
      if (field[i][j]=='.'){
        for (int k=0; k<3; k++){
          for (int l=0; l<3; l++){
            if (field[i+k-1][j+l-1]=='#'){
              count=count + 1;
            }
          }
      	}
        field[i][j]=count;
      }
      printf("%c", field[i][j]);
    }
    printf("\n");
  }
  return 0;
} 