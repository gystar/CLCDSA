#define D double
D f(D n,D d,D x){return d+(n-1)*x/2+(n-2?f(n-2,d+2*d/n+5*x/n,x+4*x/n):0);}
n,d;main(x){scanf("%d%d%d",&n,&d,&x);printf("%.9f",f(2*n,d,x));} ./Main.c:3:1: warning: data definition has no type or storage class
 n,d;main(x){scanf("%d%d%d",&n,&d,&x);printf("%.9f",f(2*n,d,x));}
 ^
./Main.c:3:1: warning: type defaults to ‘int’ in declaration of ‘n’ [-Wimplicit-int]
./Main.c:3:3: warning: type defaults to ‘int’ in declaration of ‘d’ [-Wimplicit-int]
 n,d;main(x){scanf("%d%d%d",&n,&d,&x);printf("%.9f",f(2*n,d,x));}
   ^
./Main.c:3:5: warning: return type defaults to ‘int’ [-Wimplicit-int]
 n,d;main(x){scanf("%d%d%d",&n,&d,&x);printf("%.9f",f(2*n,d,x));}
     ^
