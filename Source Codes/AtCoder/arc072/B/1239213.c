#include <stdio.h>
long long a,b;
main(){scanf("%lld%lld",&a,&b);if(abs(a-b)<=1)printf("Brown\n");else printf("Alice\n");} ./Main.c:3:1: warning: return type defaults to �int� [-Wimplicit-int]
 main(){scanf("%lld%lld",&a,&b);if(abs(a-b)<=1)printf("Brown\n");else printf("Alice\n");}
 ^
