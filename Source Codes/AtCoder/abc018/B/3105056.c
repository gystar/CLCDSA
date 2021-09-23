char s[99];l;main(r){for(scanf("%s%*d",s);~scanf("%d%d",&l,&r);)for(l--;l<--r;)s[l++]^=s[r]^=s[l]^=s[r];puts(s);} ./Main.c:1:12: warning: data definition has no type or storage class
 char s[99];l;main(r){for(scanf("%s%*d",s);~scanf("%d%d",&l,&r);)for(l--;l<--r;)s[l++]^=s[r]^=s[l]^=s[r];puts(s);}
            ^
./Main.c:1:12: warning: type defaults to ‘int’ in declaration of ‘l’ [-Wimplicit-int]
./Main.c:1:14: warning: return type defaults to ‘int’ [-Wimplicit-int]
 char s[99];l;main(r){for(scanf("%s%*d",s);~scanf("%d%d",&l,&r);)for(l--;l<--r;)s[l++]^=s[r]^=s[l]^=s[r];puts(s);}
              ^
