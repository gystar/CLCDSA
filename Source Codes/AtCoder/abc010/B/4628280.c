s;main(a){for(gets(&a);~(scanf("%d",&a));s+=(a<5|6<a?:3)-a%2);printf("%d\n",s);} ./Main.c:1:1: warning: data definition has no type or storage class
 s;main(a){for(gets(&a);~(scanf("%d",&a));s+=(a<5|6<a?:3)-a%2);printf("%d\n",s);}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘s’ [-Wimplicit-int]
./Main.c:1:3: warning: return type defaults to ‘int’ [-Wimplicit-int]
 s;main(a){for(gets(&a);~(scanf("%d",&a));s+=(a<5|6<a?:3)-a%2);printf("%d\n",s);}
   ^
