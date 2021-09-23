#include<stdio.h>
#include<string.h>
char a[101];
int b;

int main(void)
{
  int i,len;
  scanf("%s",a);
  scanf("%d",&b);
  len=strlen(a);
  for(i=0;i<len;i++)
  {
    if(i+1==b)
    {
      printf("%c\n",a[i]);
      break;
    }
    else if('1'!=a[i])
    {
      printf("%c\n",a[i]);
      break;
    }
  }
  return 0;
} 