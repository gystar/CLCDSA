n,m;main(){scanf("%d%d",&n,&m);printf("%d\n",m==1?n:m-1);} ./Main.c:1:1: warning: data definition has no type or storage class
 n,m;main(){scanf("%d%d",&n,&m);printf("%d\n",m==1?n:m-1);}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘n’ [-Wimplicit-int]
./Main.c:1:3: warning: type defaults to ‘int’ in declaration of ‘m’ [-Wimplicit-int]
 n,m;main(){scanf("%d%d",&n,&m);printf("%d\n",m==1?n:m-1);}
   ^
./Main.c:1:5: warning: return type defaults to ‘int’ [-Wimplicit-int]
 n,m;main(){scanf("%d%d",&n,&m);printf("%d\n",m==1?n:m-1);}
     ^
