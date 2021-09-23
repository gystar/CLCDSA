c[999];main(a){for(;~(a=getchar());)*c+=c[a]++;puts(*c?"no":"yes");} ./Main.c:1:1: warning: data definition has no type or storage class
 c[999];main(a){for(;~(a=getchar());)*c+=c[a]++;puts(*c?"no":"yes");}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘c’ [-Wimplicit-int]
./Main.c:1:8: warning: return type defaults to ‘int’ [-Wimplicit-int]
 c[999];main(a){for(;~(a=getchar());)*c+=c[a]++;puts(*c?"no":"yes");}
        ^
