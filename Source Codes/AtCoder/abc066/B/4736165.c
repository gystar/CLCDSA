a;i;main(b,s)char*s;{gets(s);for(a=strlen(s)/2;b&&--a;)for(b=i=0;i<a;)b|=s[2*a-++i]-s[a-i];printf("%d",2*a);} ./Main.c:1:1: warning: data definition has no type or storage class
 a;i;main(b,s)char*s;{gets(s);for(a=strlen(s)/2;b&&--a;)for(b=i=0;i<a;)b|=s[2*a-++i]-s[a-i];printf("%d",2*a);}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘a’ [-Wimplicit-int]
./Main.c:1:3: warning: data definition has no type or storage class
 a;i;main(b,s)char*s;{gets(s);for(a=strlen(s)/2;b&&--a;)for(b=i=0;i<a;)b|=s[2*a-++i]-s[a-i];printf("%d",2*a);}
   ^
./Main.c:1:3: warning: type defaults to ‘int’ in declaration of ‘i’ [-Wimplicit-int]
./Main.c:1:5: warning: return type defaults to ‘int’ [-Wimplicit-int]
 a;i;main(b,s)char*s;{gets(s);for(a=strlen(s)/2;b&&--a;)for(b=i=0;i<a;)b|=s[2*a-++i]-s[a-i];printf("%d",2*a);}
     ^
