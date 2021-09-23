a;s[9];main(){for(;gets(s);)a+=!!index(s,114);printf("%d\n",a);} ./Main.c:1:1: warning: data definition has no type or storage class
 a;s[9];main(){for(;gets(s);)a+=!!index(s,114);printf("%d\n",a);}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘a’ [-Wimplicit-int]
./Main.c:1:3: warning: data definition has no type or storage class
 a;s[9];main(){for(;gets(s);)a+=!!index(s,114);printf("%d\n",a);}
   ^
./Main.c:1:3: warning: type defaults to ‘int’ in declaration of ‘s’ [-Wimplicit-int]
./Main.c:1:8: warning: return type defaults to ‘int’ [-Wimplicit-int]
 a;s[9];main(){for(;gets(s);)a+=!!index(s,114);printf("%d\n",a);}
        ^
