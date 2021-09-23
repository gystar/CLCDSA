c;main(a,b){for(scanf("%d%d",&a,&b);a<=b;)a%100-a/10000-a++/1000%10*10?:c++;printf("%d",c);} ./Main.c:1:1: warning: data definition has no type or storage class
 c;main(a,b){for(scanf("%d%d",&a,&b);a<=b;)a%100-a/10000-a++/1000%10*10?:c++;printf("%d",c);}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘c’ [-Wimplicit-int]
./Main.c:1:3: warning: return type defaults to ‘int’ [-Wimplicit-int]
 c;main(a,b){for(scanf("%d%d",&a,&b);a<=b;)a%100-a/10000-a++/1000%10*10?:c++;printf("%d",c);}
   ^
