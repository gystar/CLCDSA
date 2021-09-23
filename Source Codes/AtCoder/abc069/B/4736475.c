main(n,s)char*s;{scanf("%s",s);printf("%c%d%c",*s,n-1,s[n=strlen(s)-1]);} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(n,s)char*s;{scanf("%s",s);printf("%c%d%c",*s,n-1,s[n=strlen(s)-1]);}
 ^
