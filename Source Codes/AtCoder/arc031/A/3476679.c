main(i,a){char n[101];scanf("%s",n);a=strlen(n)-1;for(i=0; i<=a/2; i++){if(n[i]!=n[a-i]){puts("NO");return 0;}}puts("YES");} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(i,a){char n[101];scanf("%s",n);a=strlen(n)-1;for(i=0; i<=a/2; i++){if(n[i]!=n[a-i]){puts("NO");return 0;}}puts("YES");}
 ^
