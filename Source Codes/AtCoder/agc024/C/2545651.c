b=-1;long s;main(a){for(scanf("%*d");~scanf("%d",&a);b=a)s=s<0||b+1<a?~a:b<a?s:s+b;printf("%ld",s+b);} ./Main.c:1:1: warning: data definition has no type or storage class
 b=-1;long s;main(a){for(scanf("%*d");~scanf("%d",&a);b=a)s=s<0||b+1<a?~a:b<a?s:s+b;printf("%ld",s+b);}
 ^
./Main.c:1:1: warning: type defaults to �int� in declaration of �b� [-Wimplicit-int]
./Main.c:1:13: warning: return type defaults to �int� [-Wimplicit-int]
 b=-1;long s;main(a){for(scanf("%*d");~scanf("%d",&a);b=a)s=s<0||b+1<a?~a:b<a?s:s+b;printf("%ld",s+b);}
             ^
