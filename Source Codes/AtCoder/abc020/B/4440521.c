#include <stdio.h>
#include <string.h>
int main(void){
    // Your code here!
    char a[7],b[7];
    int n;
    scanf("%s%s",a,b);
    strcat(a,b);
    n = atoi(a);
    printf("%d\n",n*2);
} 