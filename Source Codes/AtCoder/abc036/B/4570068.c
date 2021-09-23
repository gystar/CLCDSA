#include <stdio.h>
int main(void){
	int n,i,j;
	char s[51][51];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s[i]);
	}
	for(j=0;j<n;j++){
		for(i=n-1;i>=0;i--){
			printf("%c",s[i][j]);
			if(i==0) printf("\n");
		}
	}
	return 0;
} 