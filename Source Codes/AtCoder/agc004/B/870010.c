long long N,a[2000],d[2000][2000],x,i,k,t,s,p,q;main(){
	scanf("%lld%lld",&N,&x);
	for(;~scanf("%lld",a+i);++i)s+=*d[i]=a[i];
	for(;++k<N;s=t<s?t:s)
		for(t=k*x,i=0;i<N;++i)
			t+=d[i][k]=(p=a[(i-k+N)%N])<(q=d[i][k-1])?p:q;
	k=!printf("%lld\n",s);
} ./Main.c:1:49: warning: return type defaults to ‘int’ [-Wimplicit-int]
 long long N,a[2000],d[2000][2000],x,i,k,t,s,p,q;main(){
                                                 ^
