int a,b,c;main(){scanf("%d%d%d",&a,&b,&c);puts(((a%=b+c)>0&&a<=b)?"Ant":"Bug");} ./Main.c:1:11: warning: return type defaults to ‘int’ [-Wimplicit-int]
 int a,b,c;main(){scanf("%d%d%d",&a,&b,&c);puts(((a%=b+c)>0&&a<=b)?"Ant":"Bug");}
           ^
