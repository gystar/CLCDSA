#include<stdio.h>

long gcm(int a,int b){
		if(a%b==0)return b;
		return gcm(b,a%b);
}

int main(){
		int n,m;
		long ans,i,a,b;
		char s[100001],t[100001];
		scanf("%d%d%s%s",&n,&m,s,t);
		ans=(long)n*m/gcm(n,m);
		a=(long)n/gcm(n,m);
		b=(long)m/gcm(n,m);
		for(i=0;i<ans;i+=(a*b)){
				if(s[i/b]!=t[i/a]){
						puts("-1");
						return 0;
				}
		}
		printf("%ld\n",ans);
		return 0;
} 