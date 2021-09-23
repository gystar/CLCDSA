m=1e9,M;main(a){for(gets(&a);~scanf("%d",&a);M=a>M?a:M)m=a<m?a:m;printf("%d",M-m);} ./Main.c:1:1: warning: data definition has no type or storage class
 m=1e9,M;main(a){for(gets(&a);~scanf("%d",&a);M=a>M?a:M)m=a<m?a:m;printf("%d",M-m);}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘m’ [-Wimplicit-int]
./Main.c:1:7: warning: type defaults to ‘int’ in declaration of ‘M’ [-Wimplicit-int]
 m=1e9,M;main(a){for(gets(&a);~scanf("%d",&a);M=a>M?a:M)m=a<m?a:m;printf("%d",M-m);}
       ^
./Main.c:1:9: warning: return type defaults to ‘int’ [-Wimplicit-int]
 m=1e9,M;main(a){for(gets(&a);~scanf("%d",&a);M=a>M?a:M)m=a<m?a:m;printf("%d",M-m);}
         ^
