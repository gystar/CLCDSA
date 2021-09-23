char s[999];main(l,r){for(scanf("%s%*d",s);~scanf("%d%d",&l,&r);)for(r--,l--;l<r;l++,r--)s[l]^=s[r]^=s[l]^=s[r];puts(s);} ./Main.c:1:13: warning: return type defaults to ‘int’ [-Wimplicit-int]
 char s[999];main(l,r){for(scanf("%s%*d",s);~scanf("%d%d",&l,&r);)for(r--,l--;l<r;l++,r--)s[l]^=s[r]^=s[l]^=s[r];puts(s);}
             ^
