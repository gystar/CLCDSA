char s[1<<20];l;main(){gets(s);l=strlen(s)-1;puts(l%2^s[0]==s[l]?"Second":"First");} ./Main.c:1:15: warning: data definition has no type or storage class
 char s[1<<20];l;main(){gets(s);l=strlen(s)-1;puts(l%2^s[0]==s[l]?"Second":"First");}
               ^
./Main.c:1:15: warning: type defaults to ‘int’ in declaration of ‘l’ [-Wimplicit-int]
./Main.c:1:17: warning: return type defaults to ‘int’ [-Wimplicit-int]
 char s[1<<20];l;main(){gets(s);l=strlen(s)-1;puts(l%2^s[0]==s[l]?"Second":"First");}
                 ^
