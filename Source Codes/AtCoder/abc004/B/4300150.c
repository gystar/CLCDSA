#include <stdio.h>

int main(int argc, char const *argv[]){
    int i;
    char c[4][4];

    for (i = 0;i < 4; i++){
        scanf("%c %c %c %c\n",&c[i][0],&c[i][1],&c[i][2],&c[i][3]);
    }
    for (i = 3;i >= 0; i--){
        printf("%c %c %c %c\n",c[i][3],c[i][2],c[i][1],c[i][0]);
    }
    return 0;
} 