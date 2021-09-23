char a[110];main(){gets(a);long k;scanf("%ld",&k);int i=0;while(a[i]=='1')i++;if(k>i)printf("%c\n",a[i]);else puts("1");} ./Main.c:1:13: warning: return type defaults to ‘int’ [-Wimplicit-int]
 char a[110];main(){gets(a);long k;scanf("%ld",&k);int i=0;while(a[i]=='1')i++;if(k>i)printf("%c\n",a[i]);else puts("1");}
             ^
