#include <stdio.h>
int main(void){
    int N,a,b,c,d,n;
    float e,S=0;
    scanf("%d",&N);
    for(n=1;n<=N;n++){
        scanf("%d%d%d%d%f",&a,&b,&c,&d,&e);
        if(S<=a+b+c+d+((110*e)/900)) S=a+b+c+d+((110*e)/900);
    }
    printf("%f\n",S);
    return 0;
} 