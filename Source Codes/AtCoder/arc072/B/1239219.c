#include <stdio.h>
long long a,b;main(){scanf("%lld%lld",&a,&b);if(abs(a-b)<=1)printf("Brown\n");else printf("Alice\n");} ./Main.c:2:15: warning: return type defaults to ‘int’ [-Wimplicit-int]
 long long a,b;main(){scanf("%lld%lld",&a,&b);if(abs(a-b)<=1)printf("Brown\n");else printf("Alice\n");}
               ^
