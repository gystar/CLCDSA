#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char s[3][3];
    int i;
    for(i=0;i<3;i++){
        scanf("%s", s[i]);
    }
    for(i = 0; i < 3; i++)
    {
        printf("%c", s[i][i]);
    }
    
    printf("\n");
    return 0;
} 