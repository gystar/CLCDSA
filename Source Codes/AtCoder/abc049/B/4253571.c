#include<stdio.h>
int main()
{
  int h,w,i,j;
  char a[250][105];
  scanf("%d %d",&h,&w);
  getchar();
  
  for(i=1;i<=h;i++)
  {
  	for(j=1;j<=w;j++)
  	scanf("%c",&a[i][j]);
  	
  	getchar();
  }
 /* for(i=w+1;i<=2*w;i++)
  {
  	for(j=1;j<=h;j++)
  	a[i][j]=a[(i+1)/2][j];
  }*/
  
  for(i=1;i<=h;i++)
  {
  	for(j=1;j<=w;j++)
  	{
  		printf("%c",a[i][j]);
  	
  	
	  }
	  printf("\n");
	  for(j=1;j<=w;j++)
  	{
  		printf("%c",a[i][j]);
  	
  	
	  }
	  printf("\n");
  }
	return 0;
} 