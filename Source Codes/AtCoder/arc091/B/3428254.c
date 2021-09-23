long n,k,c,b;main(){scanf("%d%d",&n,&k);for(b=k;b++<n;)c+=n/b*(b-k)+fdim(n%b,k-!!k);printf("%ld",c);} ./Main.c:1:14: warning: return type defaults to ‘int’ [-Wimplicit-int]
 long n,k,c,b;main(){scanf("%d%d",&n,&k);for(b=k;b++<n;)c+=n/b*(b-k)+fdim(n%b,k-!!k);printf("%ld",c);}
              ^
