#include <stdio.h>
#include <string.h>
int main(void){
    // Your code here!
    char n[51],m[51];
    scanf("%s%s",n,m);
    if(strlen(n)>strlen(m))
        printf("%s\n",n);
    else
        printf("%s\n",m);
} 