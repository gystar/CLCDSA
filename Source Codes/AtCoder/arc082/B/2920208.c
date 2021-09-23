#include<stdio.h>
int a[100000]; 
int main() 
{
	int n,t;
while(	scanf("%d",&n)!=EOF){
	

	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	  int  tot=0; 
	  for(i=0;i<n;i++)
	  {
	  	if(a[i]==i+1){t=a[i];a[i]=a[i+1];a[i+1]=t;tot++;} 
	  
	  } 
			printf("%d\n",tot); 
	
} } 