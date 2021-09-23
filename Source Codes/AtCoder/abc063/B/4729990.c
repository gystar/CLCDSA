c[];main(a){for(;~(a=getchar());)*c+=c[a]++;puts(*c?"no":"yes");} ./Main.c:1:1: warning: data definition has no type or storage class
 c[];main(a){for(;~(a=getchar());)*c+=c[a]++;puts(*c?"no":"yes");}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘c’ [-Wimplicit-int]
./Main.c:1:5: warning: return type defaults to ‘int’ [-Wimplicit-int]
 c[];main(a){for(;~(a=getchar());)*c+=c[a]++;puts(*c?"no":"yes");}
     ^
