#include <stdio.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)

char s[600][600];
ll h,w;
int main(){
	scanf("%lld%lld\n",&h,&w);
	rep(i,0,h)scanf("%s",s+i);

	rep(i,0,h){
		rep(j,0,w)putchar(j==0||(i%2==0&&j!=w-1)||s[i][j]=='#'?'#':'.');
		putchar('\n');
	}
	putchar('\n');
	rep(i,0,h){
		rep(j,0,w)putchar(j==w-1||(i%2==1&&j!=0)||s[i][j]=='#'?'#':'.');
		putchar('\n');
	}
} 