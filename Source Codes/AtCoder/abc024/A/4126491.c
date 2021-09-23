main(a,b,c,k,s,t){scanf("%d%d%d%d%d%d",&a,&b,&c,&k,&s,&t);printf("%d\n",s+t<k?s*a+t*b:s*a+t*b-s*c-t*c);} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(a,b,c,k,s,t){scanf("%d%d%d%d%d%d",&a,&b,&c,&k,&s,&t);printf("%d\n",s+t<k?s*a+t*b:s*a+t*b-s*c-t*c);}
 ^
