k;main(n){for(scanf("%d",&n);++k*k<=n;);printf("%d",--k*k);} ./Main.c:1:1: warning: data definition has no type or storage class
 k;main(n){for(scanf("%d",&n);++k*k<=n;);printf("%d",--k*k);}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘k’ [-Wimplicit-int]
./Main.c:1:3: warning: return type defaults to ‘int’ [-Wimplicit-int]
 k;main(n){for(scanf("%d",&n);++k*k<=n;);printf("%d",--k*k);}
   ^
