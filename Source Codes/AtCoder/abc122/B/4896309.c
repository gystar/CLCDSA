#include <stdio.h>

int  main(void)
{
	char T[100];
	int count=0,max;
	
	scanf("%s",T);
	
	for(int i=0;T[i]!='\0';i++){
		count=0;
		for(int j=i;T[j]=='A'||T[j]=='G'||T[j]=='C'||T[j]=='T';j++){
			count++;
		}
		if(max<=count){
			max=count;
		}
	}
	
	printf("%d\n",max);
	
	return 0;
} 