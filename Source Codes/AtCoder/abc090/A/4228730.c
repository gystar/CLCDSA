#include<stdio.h>
int main(void){
    char c[3][4];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            scanf("%c",&c[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        printf("%c",c[i][i]);
    }
    printf("\n");
    return 0;
} 