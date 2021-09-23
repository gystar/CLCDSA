t;main(c){for(;(c=getchar())>10;)t+=c%11-3;printf("%d",t>>1);} ./Main.c:1:1: warning: data definition has no type or storage class
 t;main(c){for(;(c=getchar())>10;)t+=c%11-3;printf("%d",t>>1);}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘t’ [-Wimplicit-int]
./Main.c:1:3: warning: return type defaults to ‘int’ [-Wimplicit-int]
 t;main(c){for(;(c=getchar())>10;)t+=c%11-3;printf("%d",t>>1);}
   ^
