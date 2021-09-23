#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    printf("%d\n",n%111==0?n:n+(111-n%111));
    return 0;
} 