#include <stdio.h>
#include <string.h>

int main(void)
{
	int n,i,sum=0;
	char s[51][101];
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%s",s[i]);
	}
	
	for(i=0;i<n-1;i++){
		if(strcmp(s[i],"TAKAHASHIKUN")==0){
			sum++;
		} else if(strcmp(s[i],"Takahashikun")==0){
			sum++;
		} else if(strcmp(s[i],"takahashikun")==0){
			sum++;
		}
	}
	
	if(strcmp(s[n-1],"TAKAHASHIKUN.")==0){
			sum++;
		} else if(strcmp(s[i],"Takahashikun.")==0){
			sum++;
		} else if(strcmp(s[i],"takahashikun.")==0){
			sum++;
		}
	printf("%d\n",sum);
	return 0;
} 