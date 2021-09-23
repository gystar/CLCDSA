#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)

int main(){
	int H,W,h,w;
	scanf("%d%d%d%d",&H,&W,&h,&w);
	if(H%h==0&&W%w==0){
		puts("No");
		return 0;
	}
	puts("Yes");
	rep(i,1,H+1){
		rep(j,1,W+1)printf("%d ",i%h==0&&j%w==0?-1-4000*(h*w-1):4000);
		puts("");
	}
} 