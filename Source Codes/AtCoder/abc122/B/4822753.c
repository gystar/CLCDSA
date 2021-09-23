#include <stdio.h>

int main(void)
{
  char a[11] ;
  int i ;
  int k=0 ;
  int j=0 ;

  scanf("%s", a) ;

  for(i=0;i<11;i++)
    {
      if(a[i]=='A'||a[i]=='C'||a[i]=='G'||a[i]=='T')
	j++ ;
      else
	{
	  if(k<j)
	    k=j ;
	  j=0 ;
	}
    }

  printf("%d", k) ;
  return 0 ;
} 