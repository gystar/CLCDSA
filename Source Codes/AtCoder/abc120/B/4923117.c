#include<stdio.h>

int main(void)
{
    int a,b,c,d[100],i,j=0,k;

    scanf("%d%d%d",&a,&b,&k);
    c=a;
    if(a<b)  c=b;
    for(i=c;i>0;i--){
    if((a%i==0)&&(b%i==0)){
    d[j]=i;
    j++;
    }}
    printf("%d\n",d[k-1]);
    return 0;
} 