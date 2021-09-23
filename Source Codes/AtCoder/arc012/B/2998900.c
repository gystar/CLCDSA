#include <stdio.h>
#include <math.h>

int main(void){
    int n,a,b,l;
    scanf("%d%d%d%d",&n,&a,&b,&l);

    double len=l;
    double t=len/a;
    for(int i=0; i<n; i++){
        len=t*b;
        t=len/a;
    }
    if(a==b)printf("0\n");
    else printf("%lf\n",len);
} 