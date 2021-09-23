#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	char a[100][100];
	
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	
	int count=0;
	
	char b[6][14]={"TAKAHASHIKUN","Takahashikun","takahashikun","TAKAHASHIKUN.","Takahashikun.","takahashikun."};
	
	for(int i=0;i<n;i++){
		for(int j=0;j<6;j++){
			if(strcmp(a[i],b[j])==0){
				count++;
			}
		}
	}
	
	printf("%d\n",count);
	
	return 0;
} 