#include<stdio.h>
int main()
{
   int a[100][100],i,j,x,H,W,N,b[10000],sum=0;
   scanf("%d%d",&H,&W);
   scanf("%d",&N);
   for(i=1;i<=N;i++)
   scanf("%d",&b[i]);
   i=1;
   x=0;
   for(j=0;j<H;j++)
{
       while(x>=0&&x<W)
   {
       if(b[i]--)a[j][x]=i;
       else {a[j][x]=++i;b[i]--;}
       if(j%2==0)x++;
       else x--;
   }
   printf("\n");
   if(j%2==0)x--;
   else x++;
}
for(j=0;j<H;j++)
{
       for(x=0;x<W;x++)
    printf("%d ",a[j][x]);
    printf("\n");
}
return 0;
} 