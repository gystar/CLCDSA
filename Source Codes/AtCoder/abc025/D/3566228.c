int p[1<<25],x[26],a,f,G[20],i,j,r;
#define s(q)r=q,i>>--r&1|r/5>0&r/5<4&(i>>r-5^i>>r+5)|r%5>0&r%5<4&(i>>r-1^i>>r+1)||(p[i|1<<r]=(p[i|1<<r]+p[i])%(r=1e9+7))
main(){
	for(*p=1;~scanf("%d",&a);)a?x[a]=++j:(G[f++]=++j);
	for(;i<1<<25;i++)if(x[a=__builtin_popcount(i)+1])s(x[a]);else for(a=0;a<f;)s(G[a++]);
	printf("%d\n",p[i-1]);
}
//////////////////////////////////////////////////////////////////////////////////////////////////// ./Main.c:3:1: warning: return type defaults to �int� [-Wimplicit-int]
 main(){
 ^
