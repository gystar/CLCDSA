a,n;main(b,c){for(scanf("%d",&n);n--;b=c)c=a+b,a=b;printf("%d %d",a,b);} ./Main.c:1:1: warning: data definition has no type or storage class
 a,n;main(b,c){for(scanf("%d",&n);n--;b=c)c=a+b,a=b;printf("%d %d",a,b);}
 ^
./Main.c:1:1: warning: type defaults to �int� in declaration of �a� [-Wimplicit-int]
./Main.c:1:3: warning: type defaults to �int� in declaration of �n� [-Wimplicit-int]
 a,n;main(b,c){for(scanf("%d",&n);n--;b=c)c=a+b,a=b;printf("%d %d",a,b);}
   ^
./Main.c:1:5: warning: return type defaults to �int� [-Wimplicit-int]
 a,n;main(b,c){for(scanf("%d",&n);n--;b=c)c=a+b,a=b;printf("%d %d",a,b);}
     ^
