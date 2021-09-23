#include<string.h>
#include<stdbool.h>
#include<math.h>
#include<stdlib.h>
#include <stdio.h>
#include<ctype.h>

int compare(const void *p,const void *q){
	return *(int *)p  - *(int *)q;
}

int main(int argc, char *argv[])
{
	
	int n;
	scanf("%d",&n);
	int say[n+1];
	for(int i=0;i<n;i++)
		scanf("%d",say+i);
		
	qsort(say,n,sizeof(int),compare);
	
	int last = -1,count =0;
	for(int i=0;i<n;i++)
		if(say[i]!=last){
			count ++;
			last=say[i];
		}
			
		else{
			count--;
			last=-1;
		}
		
	printf("%d",count);
	return 0;
} 