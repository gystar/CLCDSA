#include <stdio.h>

int main(void){
    int M,D;
    scanf("%d %d",&M,&D);
    if(M%D==0)  printf("YES\n");
    else        printf("NO\n");
    return 0;
} 