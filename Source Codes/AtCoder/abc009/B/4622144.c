f;s;main(a){for(gets(&a);~scanf("%d",&a);a>f?s=f,f=a:a-f&&a>s?s=a:0);printf("%d\n",s);} ./Main.c:1:1: warning: data definition has no type or storage class
 f;s;main(a){for(gets(&a);~scanf("%d",&a);a>f?s=f,f=a:a-f&&a>s?s=a:0);printf("%d\n",s);}
 ^
./Main.c:1:1: warning: type defaults to �int� in declaration of �f� [-Wimplicit-int]
./Main.c:1:3: warning: data definition has no type or storage class
 f;s;main(a){for(gets(&a);~scanf("%d",&a);a>f?s=f,f=a:a-f&&a>s?s=a:0);printf("%d\n",s);}
   ^
./Main.c:1:3: warning: type defaults to �int� in declaration of �s� [-Wimplicit-int]
./Main.c:1:5: warning: return type defaults to �int� [-Wimplicit-int]
 f;s;main(a){for(gets(&a);~scanf("%d",&a);a>f?s=f,f=a:a-f&&a>s?s=a:0);printf("%d\n",s);}
     ^
