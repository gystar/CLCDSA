t=100;main(a){for(gets(&a);~scanf("%d",&a);t=a<t?a:t);printf("%d\n",t);} ./Main.c:1:1: warning: data definition has no type or storage class
 t=100;main(a){for(gets(&a);~scanf("%d",&a);t=a<t?a:t);printf("%d\n",t);}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘t’ [-Wimplicit-int]
./Main.c:1:7: warning: return type defaults to ‘int’ [-Wimplicit-int]
 t=100;main(a){for(gets(&a);~scanf("%d",&a);t=a<t?a:t);printf("%d\n",t);}
       ^
