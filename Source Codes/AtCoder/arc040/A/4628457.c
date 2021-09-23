#include<stdio.h>

int main(){
	int n,i,j,t=0,a=0;
	char s[100][101];
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%s",s[i]);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(s[i][j]=='R')t++;
			if(s[i][j]=='B')a++;
		}
	}
	if(t>a)puts("TAKAHASHI");
	else if(t<a)puts("AOKI");
	else puts("DRAW");
	return 0;
} 