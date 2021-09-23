#define max(a,b)a=a<b?b:a
int n;
long c,x[1<<17],v[1<<17];
main()
{
	scanf("%d%ld",&n,&c);
	long ans=0,L=0,R=0,Rmax=0;
	for(int i=0;i<n;i++)
	{
		scanf("%ld%d",x+i,v+i);
		L+=v[i];
	}
	ans=L-x[n-1];
	for(int i=n;i--;)
	{
		L-=v[i];
		R+=v[i];
		max(Rmax,R-(c-x[i]));
		max(ans,L-(i?x[i-1]*2:0)+Rmax);
	}
	long Lmax=0;
	for(int i=0;i<n;i++)
	{
		L+=v[i];
		R-=v[i];
		max(Lmax,L-x[i]);
		max(ans,R-(i!=n-1?(c-x[i+1])*2:0)+Lmax);
	}
	printf("%ld",ans);
} ./Main.c:4:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main()
 ^
