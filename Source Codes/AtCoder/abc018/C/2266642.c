int H,W,K;
char s[502][502];
int az[502][502],za[502][502];
main(){
	scanf("%d%d%d%*c",&H,&W,&K);
	for(int y=1;y<=H;++y){
		gets(s[y]+1);
		for(int x=1;x<=W;++x){
			if(s[y][x]=='o'){
				az[y][x]=az[y][x-1]+1;
			}
		}
		for(int x=W;x;--x){
			if(s[y][x]=='o'){
				za[y][x]=za[y][x+1]+1;
			}
		}
	}
	int ans=0;
	for(int y=K;y<=H+1-K;++y){
		for(int x=K;x<=W+1-K;++x){
			for(int d=-K+1;d<K;++d){
				if(az[y+d][x]<K-abs(d)||za[y+d][x]<K-abs(d)){
					--ans;
					break;
				}
			}
			++ans;
		}
	}
	printf("%d\n",ans);
} ./Main.c:4:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^
