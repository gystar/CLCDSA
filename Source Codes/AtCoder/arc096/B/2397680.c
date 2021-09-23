#define max(a,b)(a=a<b?b:a)
long c,x[1<<17],v[1<<17],ans,L,R,Rmax,Lmax;i;
main(n){
	for(scanf("%d%ld",&n,&c);~scanf("%ld%d",x+i,v+i);)L+=v[i++];
	for(;i--;){
		L-=v[i];
		R+=v[i];
		max(ans,L-!!i*x[i-1]*2+max(Rmax,R-(c-x[i])));
	}
	for(;i<n;i++){
		L+=v[i];
		R-=v[i];
		max(ans,R-(i!=n-1)*(c-x[i+1])*2+max(Lmax,L-x[i]));
	}
	printf("%ld",ans);
} ./Main.c:2:44: warning: data definition has no type or storage class
 long c,x[1<<17],v[1<<17],ans,L,R,Rmax,Lmax;i;
                                            ^
./Main.c:2:44: warning: type defaults to ‘int’ in declaration of ‘i’ [-Wimplicit-int]
./Main.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(n){
 ^
