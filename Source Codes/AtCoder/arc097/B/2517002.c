int p[1<<17];
int find(int a){return a-p[a]?p[a]=find(p[a]):a;}
int n,m,x,y,cnt;
int P[1<<17];
main()
{
	scanf("%d%d",&n,&m);
	for(int i=0;i++<n;)
	{
		p[i]=i;
		scanf("%d",P+i);
	}
	for(;~scanf("%d%d",&x,&y);)
	{
		x=find(x);y=find(y);
		if(x-y)p[x]=y;
	}
	for(int i=0;i++<n;)cnt+=find(P[i])==find(i);
	printf("%d",cnt);
} ./Main.c:5:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main()
 ^
