#include<stdio.h>
#include<math.h>
int lgx(double x)
{
    for(int i=1;i<=100;++i)
    if(i>=x)
    return i;
}
int a,b;
int main()
{
    scanf("%d%d",&a,&b);
    printf("%d\n",lgx((double)a/b)*b-a);
    return 0;
} 