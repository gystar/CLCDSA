#include<stdio.h>

int main(){
		int i,ans=0,c=1;
		char s[100001];
		scanf("%s",s);
		for(i=0;s[i]!=0;i++){
				if(s[i]=='+'){
						if(c>0)ans++;
						c=1;
				}else if(s[i]=='0'){
						c=0;
				}
		}
		if(c>0)ans++;
		printf("%d\n",ans);
		return 0;
} 