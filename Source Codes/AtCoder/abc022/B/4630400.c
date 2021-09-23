f[1<<17];n;main(a){for(gets(&a);~scanf("%d",&a);)n+=!!f[a]++;printf("%d\n",n);} ./Main.c:1:1: warning: data definition has no type or storage class
 f[1<<17];n;main(a){for(gets(&a);~scanf("%d",&a);)n+=!!f[a]++;printf("%d\n",n);}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘f’ [-Wimplicit-int]
./Main.c:1:10: warning: data definition has no type or storage class
 f[1<<17];n;main(a){for(gets(&a);~scanf("%d",&a);)n+=!!f[a]++;printf("%d\n",n);}
          ^
./Main.c:1:10: warning: type defaults to ‘int’ in declaration of ‘n’ [-Wimplicit-int]
./Main.c:1:12: warning: return type defaults to ‘int’ [-Wimplicit-int]
 f[1<<17];n;main(a){for(gets(&a);~scanf("%d",&a);)n+=!!f[a]++;printf("%d\n",n);}
            ^
