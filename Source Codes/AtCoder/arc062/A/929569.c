long long a,b,x,y,t;
long long m(long long a,long long b){return a>b?a:b;}
long long c(long long a,long long b){return a%b?a/b+1:a/b;}
main(){
	gets(&t);
	for(scanf("%lld%lld",&x,&y);~scanf("%lld%lld",&a,&b);){
		t=m(c(x,a),c(y,b));
		x=a*t;
		y=b*t;
	}
	printf("%lld\n",x+y);
	return 0;
} ./Main.c:4:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^
