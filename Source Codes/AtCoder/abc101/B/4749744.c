h;main(i,N){for(scanf("%d",&N);i<=N;i*=10)h+=N/i%10;puts(N%h?"No":"Yes");} ./Main.c:1:1: warning: data definition has no type or storage class
 h;main(i,N){for(scanf("%d",&N);i<=N;i*=10)h+=N/i%10;puts(N%h?"No":"Yes");}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘h’ [-Wimplicit-int]
./Main.c:1:3: warning: return type defaults to ‘int’ [-Wimplicit-int]
 h;main(i,N){for(scanf("%d",&N);i<=N;i*=10)h+=N/i%10;puts(N%h?"No":"Yes");}
   ^
