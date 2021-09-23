f(a,b,u,c,d){u?d=(a^b)&u,u^=d&=-d,f(a,c=a^u&-u,u),f(c^d,b,u):printf("%d ",a);}main(n,a,b){scanf("%d%d%d",&n,&a,&b);__builtin_parity(a^b)?puts("YES"),f(a,b,(1<<n)-1):puts("NO");} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 f(a,b,u,c,d){u?d=(a^b)&u,u^=d&=-d,f(a,c=a^u&-u,u),f(c^d,b,u):printf("%d ",a);}main(n,a,b){scanf("%d%d%d",&n,&a,&b);__builtin_parity(a^b)?puts("YES"),f(a,b,(1<<n)-1):puts("NO");}
 ^
