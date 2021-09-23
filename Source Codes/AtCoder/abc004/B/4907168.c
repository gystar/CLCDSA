#include <stdio.h>
     
    int main(void) {
      char C[4][4];
      for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
          scanf(" %c",&C[i][j]);
        }
      }
     
      for(int i=3;i>=0;i--) {
        for(int j=3;j>=0;j--) {
          printf("%c ",C[i][j]);
        }
        printf("\n");
      }
      return 0;
    } 