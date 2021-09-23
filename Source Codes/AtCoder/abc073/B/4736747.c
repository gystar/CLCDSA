s;main(l,r){for(gets(&l);~scanf("%d%d",&l,&r);)s+=r-l+1;printf("%d",s);} ./Main.c:1:1: warning: data definition has no type or storage class
 s;main(l,r){for(gets(&l);~scanf("%d%d",&l,&r);)s+=r-l+1;printf("%d",s);}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘s’ [-Wimplicit-int]
./Main.c:1:3: warning: return type defaults to ‘int’ [-Wimplicit-int]
 s;main(l,r){for(gets(&l);~scanf("%d%d",&l,&r);)s+=r-l+1;printf("%d",s);}
   ^
