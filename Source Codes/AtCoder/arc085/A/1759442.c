#include <stdio.h>

int main(void){
    int N,M;
    scanf("%d %d",&N,&M);
    int ans=M*1900+(N-M)*100;
    ans<<=M;
    printf("%d",ans);
    return 0;
} 