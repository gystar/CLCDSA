long N,M,c,n=1,m=1e9+7,h,r,d;main(i){for(scanf("%d%d",&N,&M);M/++i/i;n=n*r%m){for(;M%i<1;++c)M/=i;for(r=d=1;c;r=r*(N+c)%m)d=d*c--%m;for(h=2*m-4;h/=2;d=d*d%m)r=h%2?r*d%m:r;}printf("%d",n*(M>1?N:1)%m);} ./Main.c:1:30: warning: return type defaults to ‘int’ [-Wimplicit-int]
 long N,M,c,n=1,m=1e9+7,h,r,d;main(i){for(scanf("%d%d",&N,&M);M/++i/i;n=n*r%m){for(;M%i<1;++c)M/=i;for(r=d=1;c;r=r*(N+c)%m)d=d*c--%m;for(h=2*m-4;h/=2;d=d*d%m)r=h%2?r*d%m:r;}printf("%d",n*(M>1?N:1)%m);}
                              ^
