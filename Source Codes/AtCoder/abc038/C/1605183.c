#include <stdio.h>
int main(void){
    int N;
    long long int ans=0;
    long long int tinpo=1;
    scanf("%d",&N);
    int po[N];
    scanf("%d",&po[0]);
    if(N==1){printf("1\n");return 0;}
    for(int i=1;i<N;i++){
        scanf("%d",&po[i]);
        if(po[i-1]<po[i])tinpo++;
        else {
            ans+=tinpo*(tinpo+1)/2;
            tinpo=1;
        }
        if(i==N-1)ans+=tinpo*(tinpo+1)/2;
    }
    printf("%lld\n",ans);
    return 0;
} 