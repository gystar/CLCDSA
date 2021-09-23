long n,k,c;main(b){scanf("%d%d",&n,&k);for(b=k;b++<n;)c+=n/b*(b-k)+fdim(n%b,k-!!k);printf("%ld",c);} ./Main.c:1:12: warning: return type defaults to ‘int’ [-Wimplicit-int]
 long n,k,c;main(b){scanf("%d%d",&n,&k);for(b=k;b++<n;)c+=n/b*(b-k)+fdim(n%b,k-!!k);printf("%ld",c);}
            ^
