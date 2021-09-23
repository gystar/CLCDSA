#include<stdio.h>

void reverse(int x,int y,char str[]);

int main(void)
{
  char str[101];
  int n;
  int l[100];
  int r[100];
  int i;

  scanf("%s",str);
  scanf("%d",&n);

  for(i=0;i<n;i++)
    {
      scanf("%d%d",&l[i],&r[i]);
      reverse(l[i],r[i],str);
    }

  printf("%s\n",str);

  return 0;
}

void reverse(int x,int y,char str[])
{
  char temp[100];
  int i;

  for(i=x-1;i<y;i++){
    temp[i]=str[i];
  }
  for(i=x-1;i<y;i++){
    str[i]=temp[y-i+x-2];
  }
} 