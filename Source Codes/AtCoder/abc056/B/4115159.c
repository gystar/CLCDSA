main(a,b,c){scanf("%d%d%d",&a,&b,&c);printf("%d",a+b<c?c-a-b:a+c<b?b-a-c:0);} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(a,b,c){scanf("%d%d%d",&a,&b,&c);printf("%d",a+b<c?c-a-b:a+c<b?b-a-c:0);}
 ^
