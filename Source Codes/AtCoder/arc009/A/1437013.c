s;main(a,b){scanf("%*d");for(;~scanf("%d%d",&a,&b);s+=a*b);s=s*1.05,printf("%d\n",s);} ./Main.c:1:1: warning: data definition has no type or storage class
 s;main(a,b){scanf("%*d");for(;~scanf("%d%d",&a,&b);s+=a*b);s=s*1.05,printf("%d\n",s);}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘s’ [-Wimplicit-int]
./Main.c:1:3: warning: return type defaults to ‘int’ [-Wimplicit-int]
 s;main(a,b){scanf("%*d");for(;~scanf("%d%d",&a,&b);s+=a*b);s=s*1.05,printf("%d\n",s);}
   ^
