#include<stdio.h>

int main(){
	int i,g;
	char s[101];
	scanf("%s",s);
	for(g=0;s[g]!=0;g++);
	for(i=0;i<=g/2;i++){
		if(s[i]!=s[g-i-1]){
			puts("NO");
			return 0;
		}
	}
	puts("YES");
	return 0;
} 