#include <stdio.h>
int main(void){
    int n,m,a,b,c;
    scanf("%d%d%d%d",&n,&m,&a,&b);
    for (int i=0; i<m; i++){
        scanf("%d",&c);
        if (n<=a){
            n+=b;
        }
        if (n>=c){
            n-=c;
        } else {
            printf("%d\n",i+1);
            return 0;
        }
    }
    printf("complete\n");
    return 0;
} 