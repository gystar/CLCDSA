#include <stdio.h>
int main(void){
    char map[4][4];
    int i,j;
    for(i=0;i<4;i++){
         for(j=0;j<4;j++){
             scanf("%s",&map[i][j]);
         }
    }
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
             printf("%c ",map[3-i][3-j]);
        }
        printf("%c\n",map[3-i][0]);
    }
} 