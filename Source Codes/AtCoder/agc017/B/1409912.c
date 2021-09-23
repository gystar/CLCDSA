#include <stdio.h>

int main(void){
    long long int N,A,B,C,D;
    scanf("%lld %lld %lld %lld %lld",&N,&A,&B,&C,&D);
    int flag=0;
    for(int i=0;i<N;i++){
        if(i*D-(N-i-1)*C>=B-A&&i*C-(N-1-i)*D<=B-A){flag=1;break;}
    }if(flag==1)printf("YES");else printf("NO");
    return 0;
} 