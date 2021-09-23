#include<stdio.h>
 int main()
 {
 	int n,si=1;
 	scanf("%d",&n);
 	
 	
 	for(int i=2;i<n;i++)
 	{
 		if(n%i==0)
 		{
 			printf("NO\n");
 			si=0;
 			break;
		 }
		 
	}
	if(si)
	{
		printf("YES\n");
	}
 	
 } 