#include <stdio.h>




int main(void){
    int N;
    scanf("%d",&N);
    char po[310000];
    scanf(" %s",po);
    int A[N+1];
    A[0]=0;
    for(int i=1;i<=N;i++)A[i]=A[i-1]+(po[i-1]=='W'?1:0);
    int ans=1145141919;
    for(int i=1;i<=N;i++){
        int buri=A[i-1]+N-i-(A[N]-A[i]);
        if(ans>buri)ans=buri;
    }
    printf("%d",ans);
    return 0;
} 