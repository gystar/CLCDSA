b;main(a){for(;~(a=getchar());)b+=a>88;puts(b?"Four":"Three");} ./Main.c:1:1: warning: data definition has no type or storage class
 b;main(a){for(;~(a=getchar());)b+=a>88;puts(b?"Four":"Three");}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘b’ [-Wimplicit-int]
./Main.c:1:3: warning: return type defaults to ‘int’ [-Wimplicit-int]
 b;main(a){for(;~(a=getchar());)b+=a>88;puts(b?"Four":"Three");}
   ^
