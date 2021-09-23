#include <stdio.h>
int main(void){
	int n,i;
	scanf("%d",&n);
	char s[50][51];
	for(i=0;i<n;i++)scanf("%s",s[i]);
	for(i=0;i<n;i++){
		for(int j=n-1;j>=0;j--){
			printf("%c",s[j][i]);
		}
		printf("\n");
	}
	return 0;
} 