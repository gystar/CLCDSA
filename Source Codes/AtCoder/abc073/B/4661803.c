#include <stdio.h>
int main(void){
    int n,l,r,p=0;
    scanf("%d",&n);
    while(n!=0){
        scanf("%d%d",&l,&r);
        p+=r-l+1;
        n--;
    }
    printf("%d\n",p);
    return 0;
} 