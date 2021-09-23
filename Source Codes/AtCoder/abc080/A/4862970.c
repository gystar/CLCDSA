#include<stdio.h>
int main(){
   int a,b,n;
   scanf("%d%d%d",&n,&a,&b);
   int total1=a*n;
   if(total1>b)printf("%d\n",b);
   else printf("%d\n",total1);
} 