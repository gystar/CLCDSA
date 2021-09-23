#include<stdio.h>

int main(){
	int n,i,j;
	char s[50][51];
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%s",s[i]);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%c",s[n-j-1][i]);
		}
		puts("");
	}
	return 0;
} 