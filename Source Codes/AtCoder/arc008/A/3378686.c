n;main(){scanf("%d",&n);printf("%d\n",n%10>6?100*(n/10+1):100*(n/10)+15*(n%10));} ./Main.c:1:1: warning: data definition has no type or storage class
 n;main(){scanf("%d",&n);printf("%d\n",n%10>6?100*(n/10+1):100*(n/10)+15*(n%10));}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘n’ [-Wimplicit-int]
./Main.c:1:3: warning: return type defaults to ‘int’ [-Wimplicit-int]
 n;main(){scanf("%d",&n);printf("%d\n",n%10>6?100*(n/10+1):100*(n/10)+15*(n%10));}
   ^
