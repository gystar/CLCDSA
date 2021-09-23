long x,s,t;main(n){for(scanf("%d%ld",&n,&x);x;x-=x>t-2?s+=t/2,t-1:1)t=2L<<n--;printf("%ld",s);} ./Main.c:1:12: warning: return type defaults to ‘int’ [-Wimplicit-int]
 long x,s,t;main(n){for(scanf("%d%ld",&n,&x);x;x-=x>t-2?s+=t/2,t-1:1)t=2L<<n--;printf("%ld",s);}
            ^
