#include <stdio.h>

int main(void){
    char a,b;
    scanf("%c %c",&a,&b);
    a+=0x20;
    if(a==b){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
} 