#include<stdio.h>

int main(){
	int h,w,i,j,sum=0;
	char s[8][9];
	scanf("%d%d",&h,&w);
	for(i=0;i<h;i++)scanf("%s",s[i]);
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			if(s[i][j]=='#'){
				sum++;
			}
		}
	}
	if(sum==h+w-1)puts("Possible");
	else puts("Impossible");
	return 0;
} 