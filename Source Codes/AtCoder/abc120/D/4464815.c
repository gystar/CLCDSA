long t,A[1<<17],s[1<<17],p[1<<17];
g(u){return p[u]-u?p[u]=g(p[u]):u;}
f(j,a,b){
	if(~scanf("%d%d",&a,&b)){
		f(j-1);
		A[j]=t;
		a=g(a);b=g(b);
		if(a-b)t-=s[a]*s[b],s[p[a]=b]+=s[a];
	}
}
main(n,m){
	for(scanf("%d%d",&n,&m);n;t+=--n)s[p[n]=n]=1;
	for(f(m);m;)printf("%ld\n",A[m--]);
} ./Main.c:2:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 g(u){return p[u]-u?p[u]=g(p[u]):u;}
 ^
