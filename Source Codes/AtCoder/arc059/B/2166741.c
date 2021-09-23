#include<stdio.h>
#include<string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)

char s[100010];
int main(){
	gets(s);
	int n=strlen(s);
	rep(i,0,n-1){
		if(s[i]==s[i+1]){
			printf("%d %d\n",i+1,i+2);
			return 0;
		}
		if(s[i]==s[i+2]){
			printf("%d %d\n",i+1,i+3);
			return 0;
		}
	}
	puts("-1 -1");
	return 0;
} 