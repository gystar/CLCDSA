#include <stdio.h>
#include<string.h>
int main(void){
    char C,c;
    scanf("%c %c",&C,&c);
    if(strcmp(&C,&c)==-32)printf("Yes\n");
    else printf("No\n");
    return 0;
} 