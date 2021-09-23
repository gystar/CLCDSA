main(a,b){scanf("%d%d",&a,&b);b=abs(a-b),a=b/5+1,printf("%.f\n",fmin(a/2+b%5,-~a/2+5-b%5));} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(a,b){scanf("%d%d",&a,&b);b=abs(a-b),a=b/5+1,printf("%.f\n",fmin(a/2+b%5,-~a/2+5-b%5));}
 ^
