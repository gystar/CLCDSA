long m=1e9+7,D[41][1<<17]={1};
X,i,j,k,T,M=1<<17;
main(s,n){
	scanf("%d%d%d%d",&n,&j,&k,&T);
	for(X=((1<<j|1)<<k|1)<<T-1;i++<n;s=s*10L%m)
		for(j=k=0;k/M?k=0,j++<9:1;~T&X?D[i][T&=M-1]+=D[i-1][k-1],D[i][T]%=m:0)
			T=k+++k<<j;
	for(;M--;s%=m)s+=m-D[n][M];
	printf("%d",s);
} ./Main.c:2:1: warning: data definition has no type or storage class
 X,i,j,k,T,M=1<<17;
 ^
./Main.c:2:1: warning: type defaults to �int� in declaration of �X� [-Wimplicit-int]
./Main.c:2:3: warning: type defaults to �int� in declaration of �i� [-Wimplicit-int]
 X,i,j,k,T,M=1<<17;
   ^
./Main.c:2:5: warning: type defaults to �int� in declaration of �j� [-Wimplicit-int]
 X,i,j,k,T,M=1<<17;
     ^
./Main.c:2:7: warning: type defaults to �int� in declaration of �k� [-Wimplicit-int]
 X,i,j,k,T,M=1<<17;
       ^
./Main.c:2:9: warning: type defaults to �int� in declaration of �T� [-Wimplicit-int]
 X,i,j,k,T,M=1<<17;
         ^
./Main.c:2:11: warning: type defaults to �int� in declaration of �M� [-Wimplicit-int]
 X,i,j,k,T,M=1<<17;
           ^
./Main.c:3:1: warning: return type defaults to �int� [-Wimplicit-int]
 main(s,n){
 ^
