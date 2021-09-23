#include <stdio.h>
#include <string.h>
int main(void){
	int n;
	scanf("%d",&n);
	char w[100][11];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%s",w[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(w[i],w[j])==0){
				printf("No");
				return 0;
			}
		}
	}
	for(i=0;i<n-1;i++){
		if(w[i][strlen(w[i])-1] != w[i+1][0]){
			printf("No");
			return 0;
		}
	}
	printf("Yes");
	return 0;
} 