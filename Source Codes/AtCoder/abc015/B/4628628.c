n;m;main(a){for(scanf("%d");~scanf("%d",&a);)a?n++,m+=a:0;printf("%d\n",(n+--m)/n);} ./Main.c:1:1: warning: data definition has no type or storage class
 n;m;main(a){for(scanf("%d");~scanf("%d",&a);)a?n++,m+=a:0;printf("%d\n",(n+--m)/n);}
 ^
./Main.c:1:1: warning: type defaults to �int� in declaration of �n� [-Wimplicit-int]
./Main.c:1:3: warning: data definition has no type or storage class
 n;m;main(a){for(scanf("%d");~scanf("%d",&a);)a?n++,m+=a:0;printf("%d\n",(n+--m)/n);}
   ^
./Main.c:1:3: warning: type defaults to �int� in declaration of �m� [-Wimplicit-int]
./Main.c:1:5: warning: return type defaults to �int� [-Wimplicit-int]
 n;m;main(a){for(scanf("%d");~scanf("%d",&a);)a?n++,m+=a:0;printf("%d\n",(n+--m)/n);}
     ^
