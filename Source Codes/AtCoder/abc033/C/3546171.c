#include <stdio.h>
#include <string.h>
int main(void){
	char s[100010];
	scanf("%s",s);
	s[strlen(s)]='+';
	int ans=0,flag=1;
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='+'){
			if(flag==1)ans++;
			else flag = 1;
		}else if(s[i] == '0')flag=0;
	}
	printf("%d\n",ans);
	return 0;
} 