#include <stdio.h>
int main(void){
    // Your code here!
    char s[6];
    int n;
    scanf("%s%d",s,&n);
    n -= 1;
    printf("%c%c\n",s[n/5],s[n%5]);
} 