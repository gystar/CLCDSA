a[999];main(i){for(;i<5|a[i]<a[4]&&~scanf("%d",++i+a););i-=5;printf("%.f",fmin(i,a[3]-i));} ./Main.c:1:1: warning: data definition has no type or storage class
 a[999];main(i){for(;i<5|a[i]<a[4]&&~scanf("%d",++i+a););i-=5;printf("%.f",fmin(i,a[3]-i));}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘a’ [-Wimplicit-int]
./Main.c:1:8: warning: return type defaults to ‘int’ [-Wimplicit-int]
 a[999];main(i){for(;i<5|a[i]<a[4]&&~scanf("%d",++i+a););i-=5;printf("%.f",fmin(i,a[3]-i));}
        ^
