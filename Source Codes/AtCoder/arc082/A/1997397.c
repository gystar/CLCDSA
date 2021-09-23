#include<stdio.h>
int main()
{
int n, x[100002]={0}, s, i, max;
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&s);
  x[s]++;
}
 max = 0;
for(i=0;i<=100000;i++)
{
  s=x[i]+x[i+1]+x[i+2];
  if(s>max )
  {
    max = s;
  }
}
printf("%d\n", max);
return 0;
} 