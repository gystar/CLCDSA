#include <stdio.h>
int main(void){
    int N;
    long long int ans=0;
    int po[2];
    long long int tinpo=1;
    scanf("%d",&N);
    scanf("%d",&po[0]);
    if(N==1){printf("1\n");return 0;}
    for(int i=1;i<N;i++){
        po[1]=po[0];
        scanf("%d",&po[0]);
        if(po[0]>po[1])tinpo++;
        else {
            ans+=tinpo*(tinpo+1)/2;
            tinpo=1;
        }
        if(i==N-1)ans+=tinpo*(tinpo+1)/2;
    }
    printf("%lld\n",ans);
    return 0;
} 