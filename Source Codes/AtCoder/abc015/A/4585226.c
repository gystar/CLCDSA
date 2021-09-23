#include<stdio.h>
#include<string.h>

int main(void)
{
  char a[51];
  char b[51];
  int a_length;
  int b_length;
  int i;
  scanf("%s",a);
  scanf("%s",b);
  a_length=strlen(a);
  b_length=strlen(b);
  if(a_length<b_length)
    {
      for(i=0;i<b_length;i++)
	{
	  printf("%c",b[i]);
	}
      printf("\n");
    }else{
     for(i=0;i<a_length;i++)
	{
	  printf("%c",a[i]);
	}
     printf("\n");
  }
  return 0;
} 