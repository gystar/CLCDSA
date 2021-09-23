long n,k,c,b;main(){scanf("%d%d",&n,&k);n++;for(b=k;++b<n;)c+=n/b*(b-k)-!k+fdim(n,n/b*b+k);printf("%ld",c);} ./Main.c:1:14: warning: return type defaults to ‘int’ [-Wimplicit-int]
 long n,k,c,b;main(){scanf("%d%d",&n,&k);n++;for(b=k;++b<n;)c+=n/b*(b-k)-!k+fdim(n,n/b*b+k);printf("%ld",c);}
              ^
