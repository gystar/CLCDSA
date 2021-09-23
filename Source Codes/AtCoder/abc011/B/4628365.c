i;main(a){for(;~(a=getchar());putchar(i++?tolower(a):toupper(a)));} ./Main.c:1:1: warning: data definition has no type or storage class
 i;main(a){for(;~(a=getchar());putchar(i++?tolower(a):toupper(a)));}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘i’ [-Wimplicit-int]
./Main.c:1:3: warning: return type defaults to ‘int’ [-Wimplicit-int]
 i;main(a){for(;~(a=getchar());putchar(i++?tolower(a):toupper(a)));}
   ^
