x,y;g(a,b){return b?g(b,a%b):a;}main(){for(scanf("%*d%d",&x);~scanf("%d",&y);)x=g(x,y);printf("%d\n",x);} ./Main.c:1:1: warning: data definition has no type or storage class
 x,y;g(a,b){return b?g(b,a%b):a;}main(){for(scanf("%*d%d",&x);~scanf("%d",&y);)x=g(x,y);printf("%d\n",x);}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘x’ [-Wimplicit-int]
./Main.c:1:3: warning: type defaults to ‘int’ in declaration of ‘y’ [-Wimplicit-int]
 x,y;g(a,b){return b?g(b,a%b):a;}main(){for(scanf("%*d%d",&x);~scanf("%d",&y);)x=g(x,y);printf("%d\n",x);}
   ^
./Main.c:1:5: warning: return type defaults to ‘int’ [-Wimplicit-int]
 x,y;g(a,b){return b?g(b,a%b):a;}main(){for(scanf("%*d%d",&x);~scanf("%d",&y);)x=g(x,y);printf("%d\n",x);}
     ^
