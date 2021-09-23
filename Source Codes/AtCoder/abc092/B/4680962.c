#include <stdio.h>
int main(void){
    int n,d,x,a,i,j,s=0;
    scanf("%d%d%d",&n,&d,&x);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        s++;
        j=1+a;
        while(j<=d){
            s++;
            j+=a;
        }
    }
    printf("%d\n",s+x);
    return 0;
} 