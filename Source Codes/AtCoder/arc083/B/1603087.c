N,i,j,k;
long long A[301][301],inf=1e15,z;
main(){
	for(scanf("%d",&N);i++<N;){
		for(j=0;j++<N;){
			scanf("%d",A[i]+j);
		}
	}
	for(;k++<N;){
		for(i=0;i++<N;){
			if(i==k)continue;
			for(j=0;j++<N;){
				if(j==k||j==i||A[i][j]==inf)continue;
				if(A[i][j]==A[i][k]+A[k][j]){
					A[i][j]=inf;
				}else if(A[i][j]>A[i][k]+A[k][j]){
					return!puts("-1");
				}
			}
		}
	}
	for(i=0;i++<N;){
		for(j=0;j++<N;){
			z+=A[i][j]==inf?0:A[i][j];
		}
	}
	printf("%lld",z/2);
} ./Main.c:1:1: warning: data definition has no type or storage class
 N,i,j,k;
 ^
./Main.c:1:1: warning: type defaults to �int� in declaration of �N� [-Wimplicit-int]
./Main.c:1:3: warning: type defaults to �int� in declaration of �i� [-Wimplicit-int]
 N,i,j,k;
   ^
./Main.c:1:5: warning: type defaults to �int� in declaration of �j� [-Wimplicit-int]
 N,i,j,k;
     ^
./Main.c:1:7: warning: type defaults to �int� in declaration of �k� [-Wimplicit-int]
 N,i,j,k;
       ^
./Main.c:3:1: warning: return type defaults to �int� [-Wimplicit-int]
 main(){
 ^
