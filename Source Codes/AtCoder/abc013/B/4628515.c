main(a,b){scanf("%d%d",&a,&b);printf("%d\n",a=fmin((10+a-b)%10,(10+b-a)%10));} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(a,b){scanf("%d%d",&a,&b);printf("%d\n",a=fmin((10+a-b)%10,(10+b-a)%10));}
 ^
