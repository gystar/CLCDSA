main(a,b,c){scanf("%d%d%d",&a,&b,&c);int max=a;if(b>max)max=b;if(c>max)max=c;printf("%d",a+b+c-max);} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(a,b,c){scanf("%d%d%d",&a,&b,&c);int max=a;if(b>max)max=b;if(c>max)max=c;printf("%d",a+b+c-max);}
 ^
