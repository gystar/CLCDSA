unsigned long long n,s=1,d[2]={1},m=1000000007,i;main(){for(scanf("%llu",&n);++i<n;s=(s+d[i%2])%m)d[i%2]=(m+s-d[i%2])%m;printf("%llu\n",(s*n%m+m-d[1-n%2]*(n-1)%m)*(n-1)%m+1);} ./Main.c:1:50: warning: return type defaults to ‘int’ [-Wimplicit-int]
 unsigned long long n,s=1,d[2]={1},m=1000000007,i;main(){for(scanf("%llu",&n);++i<n;s=(s+d[i%2])%m)d[i%2]=(m+s-d[i%2])%m;printf("%llu\n",(s*n%m+m-d[1-n%2]*(n-1)%m)*(n-1)%m+1);}
                                                  ^
