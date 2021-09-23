long long M[16],Z[1<<16];main(n,m,x,y,z){for(scanf("%d%d",&n,&m);m--;M[x-1]|=1<<(y-1))scanf("%d%d",&x,&y);for(m=1<<n,*Z=x=-1;++x<m;)for(y=-1;z=x|(1<<++y),y<n;)x-z&&!(M[y]&z)&&(Z[z]+=Z[x]);printf("%lld",-Z[m-1]);} ./Main.c:1:26: warning: return type defaults to ‘int’ [-Wimplicit-int]
 long long M[16],Z[1<<16];main(n,m,x,y,z){for(scanf("%d%d",&n,&m);m--;M[x-1]|=1<<(y-1))scanf("%d%d",&x,&y);for(m=1<<n,*Z=x=-1;++x<m;)for(y=-1;z=x|(1<<++y),y<n;)x-z&&!(M[y]&z)&&(Z[z]+=Z[x]);printf("%lld",-Z[m-1]);}
                          ^
