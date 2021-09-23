c(int*a,int*b){return strcmp(a,b);}s[9999];i;j;main(){for(scanf("%*d%*d");~scanf("%s",s+i*32);)i++;for(qsort(s,i,128,c);j-i;)printf("%s",s+32*j++);} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 c(int*a,int*b){return strcmp(a,b);}s[9999];i;j;main(){for(scanf("%*d%*d");~scanf("%s",s+i*32);)i++;for(qsort(s,i,128,c);j-i;)printf("%s",s+32*j++);}
 ^
