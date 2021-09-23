i;main(a,b,k){for(scanf("%d%d%d",&a,&b,&k),i=a;i<=b;i++)i-a<k|i>b-k&&printf("%d ",i);} ./Main.c:1:1: warning: data definition has no type or storage class
 i;main(a,b,k){for(scanf("%d%d%d",&a,&b,&k),i=a;i<=b;i++)i-a<k|i>b-k&&printf("%d ",i);}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘i’ [-Wimplicit-int]
./Main.c:1:3: warning: return type defaults to ‘int’ [-Wimplicit-int]
 i;main(a,b,k){for(scanf("%d%d%d",&a,&b,&k),i=a;i<=b;i++)i-a<k|i>b-k&&printf("%d ",i);}
   ^
