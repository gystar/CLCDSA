int a[1<<17],n,m,f[1<<17],dp[1<<17]={1},l,M=1e9+7,i;
main(c)
{
	for(scanf("%d%d",&n,&m);~scanf("%d",f+i);c=(dp[++i]=c)*2%M)if(++a[f[i]]>1)for(;c=(c-dp[l]+M)%M,a[f[l++]]--<2;);
	printf("%d\n",dp[n]);
} ./Main.c:2:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(c)
 ^
