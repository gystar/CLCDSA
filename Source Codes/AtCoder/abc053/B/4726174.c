i;c;main(z){for(;~(c=getchar());)i?z=i++&&c-90?z:i:c-65?:i++;printf("%d",z);} ./Main.c:1:1: warning: data definition has no type or storage class
 i;c;main(z){for(;~(c=getchar());)i?z=i++&&c-90?z:i:c-65?:i++;printf("%d",z);}
 ^
./Main.c:1:1: warning: type defaults to �int� in declaration of �i� [-Wimplicit-int]
./Main.c:1:3: warning: data definition has no type or storage class
 i;c;main(z){for(;~(c=getchar());)i?z=i++&&c-90?z:i:c-65?:i++;printf("%d",z);}
   ^
./Main.c:1:3: warning: type defaults to �int� in declaration of �c� [-Wimplicit-int]
./Main.c:1:5: warning: return type defaults to �int� [-Wimplicit-int]
 i;c;main(z){for(;~(c=getchar());)i?z=i++&&c-90?z:i:c-65?:i++;printf("%d",z);}
     ^
