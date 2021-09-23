a[];main(i){for(;~scanf("%d",++i+a);)i>4?a[4]+=1+~-a[3]/a[i]:0;printf("%d",a[4]);} ./Main.c:1:1: warning: data definition has no type or storage class
 a[];main(i){for(;~scanf("%d",++i+a);)i>4?a[4]+=1+~-a[3]/a[i]:0;printf("%d",a[4]);}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘a’ [-Wimplicit-int]
./Main.c:1:5: warning: return type defaults to ‘int’ [-Wimplicit-int]
 a[];main(i){for(;~scanf("%d",++i+a);)i>4?a[4]+=1+~-a[3]/a[i]:0;printf("%d",a[4]);}
     ^
