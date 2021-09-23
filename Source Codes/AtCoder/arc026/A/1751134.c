#include<stdio.h>
int main(void)
{
int i,n,b,c,a;


scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

if(a<=5){
printf("%d\n",a*c);}
else if(a>5){
printf("%d\n",c*5+((a-5)*b));}



return 0;
} 