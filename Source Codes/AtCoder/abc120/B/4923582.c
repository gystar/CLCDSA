#include<stdio.h>

int main(void)
{
    int a,b,c,s[100],i,j;

    scanf("%d%d%d",&a,&b,&c);

    j=0;
    for(i=a;i>=1;i--){
       if((a%i==0)&&(b%i==0)){
       s[j]=i;
       j=j+1;
       }
    }
    printf("%d\n",s[c-1]);

    return 0;
} 