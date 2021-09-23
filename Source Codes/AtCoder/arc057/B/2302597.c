#define min(a,b) ((a)<(b)?(a):(b))
long long d[2001][2001];
main(){
	int N,K;
	scanf("%d%d",&N,&K);
	for(int i=0;i<=N;++i){
		for(int j=0;j<=N;++j){
			d[i][j]=1e9+1;
		}
	}
	int s=0;
	for(int i=1;i<=N;++i){
		long long a;
		scanf("%lld",&a);
		d[i][0]=0;
		if(i==1){
			d[1][1]=1;
		}else{
			for(int j=1;j<=i;++j){
				long long k=d[i-1][j-1]*a/s+1;
				if(k<=a){
					d[i][j]=min(d[i-1][j],d[i-1][j-1]+k);
				}else{
					d[i][j]=d[i-1][j];
				}
			}
		}
		s+=a;
	}
	if(s==K){
		return!puts("1");
	}
	for(int i=N;i>=0;--i){
		if(d[N][i]<=K){
			return!printf("%d\n",i);
		}
	}
} ./Main.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^
