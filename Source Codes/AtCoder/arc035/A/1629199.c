#include<stdio.h>
int main(){
	int i,l;
	char s[10010];
	scanf("%s",s);
	for(l=0;s[l];l++);
	for(i=0;s[i];i++){//printf("%c %c\n",s[i],s[l-1-i]);
		if(s[i]-s[l-i-1]&&s[i]-'*'&&s[l-i-1]-'*')break;
	}
	printf("%s\n",s[i]?"NO":"YES");
	return 0;
} 