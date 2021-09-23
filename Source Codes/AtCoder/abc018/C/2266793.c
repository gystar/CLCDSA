#include<stdlib.h>
int H,W,K;
char s[502][502];
main(){
	scanf("%d%d%d%*c",&H,&W,&K);
	for(int y=1;y<=H;++y){
		gets(s[y]+1);
	}
	int ans=0;
	for(int y=K;y<=H+1-K;++y){
		for(int x=K;x<=W+1-K;++x){
			for(int dy=-K+1;dy<K;++dy){
				for(int dx=-K+abs(dy)+1;dx<K-abs(dy);++dx){
					if(s[y+dy][x+dx]=='x'){
						goto a;
					}
				}
			}
			++ans;
			a:;
		}
	}
	printf("%d\n",ans);
} ./Main.c:4:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^
