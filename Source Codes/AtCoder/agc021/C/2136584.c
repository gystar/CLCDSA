int n,m,a,b,i; char p[1009][1009];
void x(int i, int j){p[i][j]=94;p[i+1][j]=118;b--;}
int main(int j){
	scanf("%d%d%d%d",&n,&m,&a,&b);
	for(i=1;i<=n;)memset(p[i++]+1,46,m);
	for(i=1;i<n&&b&&m&1;i+=2)x(i,m);
	if(b&n&m>2&n>1)x(n-1,m-2);
	for(i=1;i<n;i++)for(j=1;j<=m&&b;j++)if(p[i][j]+p[i+1][j]<99)x(i,j);
	for(i=1;i<=n;i++)for(j=1;j<m&&a;j++)if(p[i][j]+p[i][j+1]<99)p[i][j]=60,p[i][j+1]=62,a--;
	puts(a|b?"NO":"YES");
	for(i=1;!a&!b&i<=n;)puts(p[i++]+1);
	return 0;
} 