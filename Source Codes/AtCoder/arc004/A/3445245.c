#include<stdio.h>
#include<math.h>
int n,srx[101],sry[101],i,j;
double lhy;
double lgx(int i,int j)
{
    int mzy=srx[i]-srx[j],zjq=sry[i]-sry[j];
    return sqrt(mzy*mzy+zjq*zjq);
}
double max(double a,double b)
{
    return a>b?a:b;
}
int main()
{
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d%d",&srx[i],&sry[i]);
    for(i=1;i<n;i++)
    for(j=i+1;j<=n;j++)
    lhy=max(lhy,lgx(i,j));
    printf("%.10f",lhy);
    return 0;
} 