#include <stdio.h>

int main(void)
{
	int N,a4=0,a2=0,a0=0,i;
	scanf("%d",&N);
	long int a[N];
	for(i=0;i<N;i++)
	{
	  scanf("%ld",&a[i]);
	  if(a[i]%4==0)
	    a4++;
	  else if(a[i]%2==0)
	    a2++;
	  else
	    a0++;
    }
    if(a2)
      a0=a0+1;
    
    if(a4>=a0-1)
      printf("Yes");
    else
      printf("No");
      
    return 0;
	
	
 } 