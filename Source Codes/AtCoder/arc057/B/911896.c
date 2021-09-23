#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")

#define M 9999
int A[M];long long S[M],D[M];
int main(){
	int N,i=0,n;
	long long K,z;
	for(scanf("%d%lld",&N,&K);i<N;i++)scanf("%d",A+i),S[i+1]=S[i]+A[i],D[i+1]=1<<29;
	if(S[N]==K){puts("1");return 0;}
	D[1]=1;
	for(n=1;n<N;n++)for(i=n+1;i;i--)if(z=D[i-1]+A[n]*D[i-1]/S[n]+1,D[i-1]<S[n]&&D[i]>z)D[i]=z;
	for(i=N;~i;i--)if(D[i]<=K){printf("%d\n",i);return 0;}
} 