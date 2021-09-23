a,b,c;main(){scanf("%d%d%d",&a,&b,&c);puts(a>c?"No":c>b?"No":"Yes");} ./Main.c:1:1: warning: data definition has no type or storage class
 a,b,c;main(){scanf("%d%d%d",&a,&b,&c);puts(a>c?"No":c>b?"No":"Yes");}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘a’ [-Wimplicit-int]
./Main.c:1:3: warning: type defaults to ‘int’ in declaration of ‘b’ [-Wimplicit-int]
 a,b,c;main(){scanf("%d%d%d",&a,&b,&c);puts(a>c?"No":c>b?"No":"Yes");}
   ^
./Main.c:1:5: warning: type defaults to ‘int’ in declaration of ‘c’ [-Wimplicit-int]
 a,b,c;main(){scanf("%d%d%d",&a,&b,&c);puts(a>c?"No":c>b?"No":"Yes");}
     ^
./Main.c:1:7: warning: return type defaults to ‘int’ [-Wimplicit-int]
 a,b,c;main(){scanf("%d%d%d",&a,&b,&c);puts(a>c?"No":c>b?"No":"Yes");}
       ^
