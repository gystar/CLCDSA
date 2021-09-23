#include <stdio.h>
int main(void){
    char n[3];
    scanf("%s",n);
    if(n[0]==n[2]) printf("Yes");
    else printf("No");
    return 0;
} 