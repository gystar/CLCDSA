main(a,b,c){scanf("%d%d",&a,&b);for(c=b;c;a*=10)c/=10;c=sqrt(a+=b);puts(c*c-a?"No":"Yes");} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(a,b,c){scanf("%d%d",&a,&b);for(c=b;c;a*=10)c/=10;c=sqrt(a+=b);puts(c*c-a?"No":"Yes");}
 ^
