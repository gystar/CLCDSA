long long n;main(a){scanf("%lld",&n);for(n++;n>9;n/=10)a+=9;printf("%d\n",n+a-2);} ./Main.c:1:13: warning: return type defaults to ‘int’ [-Wimplicit-int]
 long long n;main(a){scanf("%lld",&n);for(n++;n>9;n/=10)a+=9;printf("%d\n",n+a-2);}
             ^
