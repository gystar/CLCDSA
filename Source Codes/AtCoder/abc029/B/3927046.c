#include<stdio.h>
#include<string.h>
char srx[11];
int sry,i,j;
int main()
{
  for(i=1;i<=12;++i)
  {gets(srx);
  int n=strlen(srx);
  for(j=0;j<n;++j)
  if(srx[j]=='r')
  {sry++;
  break;}}
  printf("%d\n",sry);
  return 0;
} 