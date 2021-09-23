s;main(x,k){for(scanf("%*d%d",&k);~scanf("%d",&x);)s+=x>k/2?abs(x-k):x;printf("%d",s*2);} ./Main.c:1:1: warning: data definition has no type or storage class
 s;main(x,k){for(scanf("%*d%d",&k);~scanf("%d",&x);)s+=x>k/2?abs(x-k):x;printf("%d",s*2);}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘s’ [-Wimplicit-int]
./Main.c:1:3: warning: return type defaults to ‘int’ [-Wimplicit-int]
 s;main(x,k){for(scanf("%*d%d",&k);~scanf("%d",&x);)s+=x>k/2?abs(x-k):x;printf("%d",s*2);}
   ^
