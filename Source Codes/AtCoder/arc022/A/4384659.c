#include<stdio.h>

int main(){
	int a=0,i;
	char s[101];
	scanf("%s",s);
	for(i=0;s[i]!=0;i++){
		if(a==0&&(s[i]=='i'||s[i]=='I'))a++;
		if(a==1&&(s[i]=='c'||s[i]=='C'))a++;
		if(a==2&&(s[i]=='t'||s[i]=='T'))a++;
	}
	if(a==3)puts("YES");
	else puts("NO");
	return 0;
} 