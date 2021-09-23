#include<stdio.h>
int main(void){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c = a;
    if (b > a){
        c = b;
    }
    printf("%d\n",c);
    return 0;
} 