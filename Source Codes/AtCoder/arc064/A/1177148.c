#include <stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b))
#define ll long long
int ary[100001];
 int main(void)
 {
 	int n,x;
 	ll res=0;
 	scanf("%d %d",&n,&x);
 	for(int i=1;i<=n;i++){
 		scanf("%d",&ary[i]);
 		int p=MAX(0,ary[i-1]+ary[i]-x);
 		res+=p,ary[i]-=p;
 	}
 	printf("%lld",res);
 	return 0;
 } 