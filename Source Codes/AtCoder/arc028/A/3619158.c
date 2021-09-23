main(){int a,b,c;scanf("%d%d%d",&a,&b,&c);puts(((a%=b+c)>0&&a<=b)?"Ant":"Bug");} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){int a,b,c;scanf("%d%d%d",&a,&b,&c);puts(((a%=b+c)>0&&a<=b)?"Ant":"Bug");}
 ^
