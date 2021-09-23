#include <stdio.h>
int main(void){
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    if (n%(a+b)>a || n%(a+b)==0){
        printf("Bug\n");
    } else {
        printf("Ant\n");
    }
    return 0;
} 