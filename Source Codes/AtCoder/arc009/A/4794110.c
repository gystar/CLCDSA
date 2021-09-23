#include <stdio.h>
int main(void){
    int n,a,b,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        sum+=b*a;
    }
    printf("%d\n",(int)(sum*1.05));
    return 0;
} 