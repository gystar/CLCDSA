#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    if (n%10>=7){
        n+=10-n%10;
    }
    printf("%d\n",n/10*100+n%10*15);
    return 0;
} 