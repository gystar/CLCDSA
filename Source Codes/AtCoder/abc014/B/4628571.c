s;main(x,a){scanf("%*d%d",&x);for(;~(scanf("%d",&a));x/=2)s+=x%2*a;printf("%d\n",s);} ./Main.c:1:1: warning: data definition has no type or storage class
 s;main(x,a){scanf("%*d%d",&x);for(;~(scanf("%d",&a));x/=2)s+=x%2*a;printf("%d\n",s);}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘s’ [-Wimplicit-int]
./Main.c:1:3: warning: return type defaults to ‘int’ [-Wimplicit-int]
 s;main(x,a){scanf("%*d%d",&x);for(;~(scanf("%d",&a));x/=2)s+=x%2*a;printf("%d\n",s);}
   ^
