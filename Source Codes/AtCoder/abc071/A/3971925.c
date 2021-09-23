x,a;main(b){scanf("%d%d%d",&x,&a,&b);puts(abs(x-a)<abs(x-b)?"A":"B");} ./Main.c:1:1: warning: data definition has no type or storage class
 x,a;main(b){scanf("%d%d%d",&x,&a,&b);puts(abs(x-a)<abs(x-b)?"A":"B");}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘x’ [-Wimplicit-int]
./Main.c:1:3: warning: type defaults to ‘int’ in declaration of ‘a’ [-Wimplicit-int]
 x,a;main(b){scanf("%d%d%d",&x,&a,&b);puts(abs(x-a)<abs(x-b)?"A":"B");}
   ^
./Main.c:1:5: warning: return type defaults to ‘int’ [-Wimplicit-int]
 x,a;main(b){scanf("%d%d%d",&x,&a,&b);puts(abs(x-a)<abs(x-b)?"A":"B");}
     ^
