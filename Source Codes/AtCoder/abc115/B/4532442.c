#include <stdio.h>

int main(){
    int N;scanf("%d",&N);
    int p[N];
    int max=0;
    int ans=0;
    int ind=0;
    for(int i=0;i<N;i++){
        scanf("%d",&p[i]);
            if(max<p[i]){
                max=p[i];
                ind=i;
            }   
        ans+=p[i];
    }
    ans-=p[ind]/2;
    printf("%d",ans);
    return 0;
} 