#define L long long
L F(L A,L B){return B?A/B*B*2+F(B,A%B):-A;}
main(){L N,X;scanf("%lld%lld",&N,&X);printf("%lld",N+F(N-X,X));} ./Main.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){L N,X;scanf("%lld%lld",&N,&X);printf("%lld",N+F(N-X,X));}
 ^
