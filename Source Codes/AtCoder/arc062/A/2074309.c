long long a,b,c,d;main(){gets(&a);for(a=b=1;~scanf("%lld%lld",&c,&d);a=b*c+c,b=b*d+d)a=~-a/c,b=~-b/d,b<a&&(b=a);printf("%lld\n",a+b);} ./Main.c:1:19: warning: return type defaults to �int� [-Wimplicit-int]
 long long a,b,c,d;main(){gets(&a);for(a=b=1;~scanf("%lld%lld",&c,&d);a=b*c+c,b=b*d+d)a=~-a/c,b=~-b/d,b<a&&(b=a);printf("%lld\n",a+b);}
                   ^
