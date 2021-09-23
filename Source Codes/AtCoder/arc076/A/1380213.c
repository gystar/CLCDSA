long N,M,a,i,m=1e9+7;long f(int A){return A?A*f(A-1)%m:1;}main(){scanf("%d%d",&N,&M);printf("%d",(M^N?M>N+1||M<N-1?0:1:2)*f(N)*f(M)%m);} ./Main.c:1:59: warning: return type defaults to ‘int’ [-Wimplicit-int]
 long N,M,a,i,m=1e9+7;long f(int A){return A?A*f(A-1)%m:1;}main(){scanf("%d%d",&N,&M);printf("%d",(M^N?M>N+1||M<N-1?0:1:2)*f(N)*f(M)%m);}
                                                           ^
