#include <stdio.h>
int main(void){
    // Your code here!
    char a;
    scanf("%c",&a);
    int i = (unsigned char)a;
    printf("%d\n",i-64);
} 