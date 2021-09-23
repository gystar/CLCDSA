#include <stdio.h>
int b[30];
int main(void){
    int n,m,c,res=0;
    scanf("%d%d%d",&n,&m,&c);
    for(int i=0;i<m;i++) scanf("%d",b+i);
    for(int i=0;i<n;i++){
        int a,sum=c;
        for(int j=0;j<m;j++){
            scanf("%d",&a);
            sum+=a*b[j];
        }
        if(sum>0) res++;
    }
    printf("%d\n",res);
} 