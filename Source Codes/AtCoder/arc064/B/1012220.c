char s[1<<20];main(l){gets(s);l=strlen(s)-1;puts(l%2^s[0]==s[l]?"Second":"First");} ./Main.c:1:15: warning: return type defaults to ‘int’ [-Wimplicit-int]
 char s[1<<20];main(l){gets(s);l=strlen(s)-1;puts(l%2^s[0]==s[l]?"Second":"First");}
               ^
