f(a,b,x,p,q){for(p=q=1;x&p|~(a^b)&p?p<<=1:x&q|p==q?q<<=1:0;);~x?f(a,a^q,x^p),f(a^p^q,b,x^p):printf("%d ",a);}main(n,a,b){scanf("%d%d%d",&n,&a,&b);__builtin_popcount(a^b)%2?puts("YES"),f(a,b,-1<<n):puts("NO");} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 f(a,b,x,p,q){for(p=q=1;x&p|~(a^b)&p?p<<=1:x&q|p==q?q<<=1:0;);~x?f(a,a^q,x^p),f(a^p^q,b,x^p):printf("%d ",a);}main(n,a,b){scanf("%d%d%d",&n,&a,&b);__builtin_popcount(a^b)%2?puts("YES"),f(a,b,-1<<n):puts("NO");}
 ^
