p[1<<17],s,x,y,z;
f(a){return p[a]-a?p[a]=f(p[a]):a;}
u(a,b){p[f(b)]=f(a);}
main(n)
{
	for(n=atoi(gets(p));y++<n;)p[y]=y;
	for(;~scanf("%d%d",&x,&y);)u(x,y);
	for(;z++<n;)s+=p[z]==z;
	printf("%d\n",s-1);
} ./Main.c:1:1: warning: data definition has no type or storage class
 p[1<<17],s,x,y,z;
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘p’ [-Wimplicit-int]
./Main.c:1:10: warning: type defaults to ‘int’ in declaration of ‘s’ [-Wimplicit-int]
 p[1<<17],s,x,y,z;
          ^
./Main.c:1:12: warning: type defaults to ‘int’ in declaration of ‘x’ [-Wimplicit-int]
 p[1<<17],s,x,y,z;
            ^
./Main.c:1:14: warning: type defaults to ‘int’ in declaration of ‘y’ [-Wimplicit-int]
 p[1<<17],s,x,y,z;
              ^
./Main.c:1:16: warning: type defaults to ‘int’ in declaration of ‘z’ [-Wimplicit-int]
 p[1<<17],s,x,y,z;
                ^
./Main.c:2:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 f(a){return p[a]-a?p[a]=f(p[a]):a;}
 ^
