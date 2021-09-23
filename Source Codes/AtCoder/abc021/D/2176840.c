long M=1e9+7,s=1,t=1;
long p(a,b)long a;{return b?p(a*a%M,b/2)*(b%2?a:1)%M:1;}
main(i,a,b){scanf("%d%d",&a,&b);for(a+=b;b/i;t=t*i++%M)s=s*(a-i)%M;printf("%d\n",s*p(t,M-2)%M);} 