#import<stdio.h>
main(){long long x;scanf("%lld",&x);printf("%lld\n",x/11*2+(x%11+5)/6);} ./Main.c:1:2: warning: #import is a deprecated GCC extension [-Wdeprecated]
 #import<stdio.h>
  ^
./Main.c:2:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){long long x;scanf("%lld",&x);printf("%lld\n",x/11*2+(x%11+5)/6);}
 ^
