a,b;main(){scanf("%d%d",&a,&b);puts(((long)a*b>0)?((a>0||(b-a)%2)?"Positive":"Negative"):"Zero");} ./Main.c:1:1: warning: data definition has no type or storage class
 a,b;main(){scanf("%d%d",&a,&b);puts(((long)a*b>0)?((a>0||(b-a)%2)?"Positive":"Negative"):"Zero");}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘a’ [-Wimplicit-int]
./Main.c:1:3: warning: type defaults to ‘int’ in declaration of ‘b’ [-Wimplicit-int]
 a,b;main(){scanf("%d%d",&a,&b);puts(((long)a*b>0)?((a>0||(b-a)%2)?"Positive":"Negative"):"Zero");}
   ^
./Main.c:1:5: warning: return type defaults to ‘int’ [-Wimplicit-int]
 a,b;main(){scanf("%d%d",&a,&b);puts(((long)a*b>0)?((a>0||(b-a)%2)?"Positive":"Negative"):"Zero");}
     ^
