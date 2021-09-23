main(){int n,m;scanf("%d%d",&n,&m);for(int i=m/n;i>=1;i--){if(m%i==0){printf("%lld",i);return 0;}}} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){int n,m;scanf("%d%d",&n,&m);for(int i=m/n;i>=1;i--){if(m%i==0){printf("%lld",i);return 0;}}}
 ^
