#include <stdio.h>
int main(void){
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++)scanf("%d",&a[i]);
    int ans=0;
    for(int i=0;i<N-1;i++){
        if(a[i]==i+1&&a[i+1]==i+2){a[i]=0;a[i+1]=0;ans++;}
    }
    for(int i=0;i<N;i++)if(a[i]==i+1)ans++;
    printf("%d",ans);
    return 0;
} 