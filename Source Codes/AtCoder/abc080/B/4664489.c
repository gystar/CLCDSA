#include <stdio.h>
int main(void){
    int n,i,m,f=0;
    scanf("%d",&n);
    m=n;
    for(i=0;i<10;i++){
        f+=m%10;
        m/=10;
    }
    printf("%s\n",(n%f==0?"Yes":"No"));
    return 0;
} 