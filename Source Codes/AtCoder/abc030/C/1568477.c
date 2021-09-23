#include <stdio.h>
int main(void){
    int N,M,X,Y;
    scanf("%d %d %d %d",&N,&M,&X,&Y);
    int k=0;
    int l=0;
    int ans=0;
    int nowtime=0;
    int a[N],b[M];
    for(int i=0;i<N;i++)scanf("%d",&a[i]);
    for(int i=0;i<M;i++)scanf("%d",&b[i]);
    while(1){
        for(;k<N;k++){
            if(nowtime<=a[k]){
            nowtime=a[k]+X;
            for(;l<M;l++){
                if(nowtime<=b[l]){
                    nowtime=b[l]+Y;
                    ans++;
                    break;
                }
            }
            break;
            }
        }
        if(k==N||l==M)break;
    }
    printf("%d\n",ans);
    return 0;
} 