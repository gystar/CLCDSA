long a,b,c,d,M=1e9+7,w[1001][1001],e[1001],P[1001][1001],n,i,j;int p(long a,int b){return b?b%2?p(a*a%M,b/2)*a%M:p(a*a%M,b/2)%M:1;}main(k){for(scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);i<=n;)w[i++][0]=1;for(*e=i=1;i<=n;)e[i]=e[i-1]*i++%M;for(i=0;i++<n;)for(j=i;~j;)P[i][j]=e[i]*p(e[i-j--],M-2)%M;for(;i--;)e[i]=p(e[i],M-2);for(i=a-1;i++<b;)for(j=-1;j++<n;)for(w[i][j]=w[i-1][j],k=c;k<=d&&k<=j/i;)w[i][j]=(w[i][j]+w[i-1][j-i*k]*P[n-j+i*k][i*k]%M*p(e[i],k)%M*e[k++]%M)%M;printf("%d\n",w[b][n]);} ./Main.c:1:132: warning: return type defaults to �int� [-Wimplicit-int]
 long a,b,c,d,M=1e9+7,w[1001][1001],e[1001],P[1001][1001],n,i,j;int p(long a,int b){return b?b%2?p(a*a%M,b/2)*a%M:p(a*a%M,b/2)%M:1;}main(k){for(scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);i<=n;)w[i++][0]=1;for(*e=i=1;i<=n;)e[i]=e[i-1]*i++%M;for(i=0;i++<n;)for(j=i;~j;)P[i][j]=e[i]*p(e[i-j--],M-2)%M;for(;i--;)e[i]=p(e[i],M-2);for(i=a-1;i++<b;)for(j=-1;j++<n;)for(w[i][j]=w[i-1][j],k=c;k<=d&&k<=j/i;)w[i][j]=(w[i][j]+w[i-1][j-i*k]*P[n-j+i*k][i*k]%M*p(e[i],k)%M*e[k++]%M)%M;printf("%d\n",w[b][n]);}
                                                                                                                                    ^
