#include<stdio.h>
#include<math.h>
int n,a,b,t,i;
int lgx(int x,int y)
{
    int i;
    while(y)
    {i=x%y;
    x=y;
    y=i;}
    return x;
}
int main()
{
    scanf("%d%d%d",&a,&b,&n);
    t=a*b/lgx(a,b);
    if(n%t)
    printf("%d\n",(n/t+1)*t);
    else
    printf("%d\n",n/t*t);
    return 0;
} 