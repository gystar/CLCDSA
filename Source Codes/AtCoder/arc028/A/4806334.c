#include <stdio.h>
int main(void){
    int n,a,b,i=0;
    scanf("%d%d%d",&n,&a,&b);
    while(n>0){
        if(i%2==0) n-=a;
        else n-=b;
        i++;
    }
    if(i%2==0) printf("Bug\n");
    else printf("Ant\n");
    return 0;
} 