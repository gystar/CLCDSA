#include<stdio.h>
#include<string.h>

int main(){
	int n,i,ans=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		char s[101];
		scanf("%s",s);
		if(strcmp(s,"TAKAHASHIKUN")==0)ans++;
		if(strcmp(s,"Takahashikun")==0)ans++;
		if(strcmp(s,"takahashikun")==0)ans++;
		if(strcmp(s,"TAKAHASHIKUN.")==0)ans++;
		if(strcmp(s,"Takahashikun.")==0)ans++;
		if(strcmp(s,"takahashikun.")==0)ans++;
	}
	printf("%d\n",ans);
	return 0;
} 