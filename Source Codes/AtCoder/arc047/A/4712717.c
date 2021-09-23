#include<stdio.h>

int main(){
	int n,l,i,ans=0,f=1;
	char s[100001];
	scanf("%d%d%s",&n,&l,s);
	for(i=0;i<n;i++){
		if(s[i]=='+')f++;
		else f--;
		if(f>l){
			ans++;
			f=1;
		}
	}
	printf("%d\n",ans);
	return 0;
} 