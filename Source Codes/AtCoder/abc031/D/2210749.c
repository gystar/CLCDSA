int c[9],i,j,f,g,r;
char v[50][99],w[50][99],s[9][9],t[9];
main(k,n)
{
	for(scanf("%d%d",&k,&n);~scanf("%s%s",v+i++,w+i););
	for(;++j<k;)c[j]=1;
	for(;!f;){
		for(i=f=0;c[f]++>2;)c[f++]=1;
		for(f=1;i<n;f&=g==strlen(w[i++]))for(g=j=0;j<strlen(v[i]);)g+=c[v[i][j++]-'1'];
		if(f){
			for(i=0;i<k;)*s[i++]=0;
			for(i=0;i<n;i++)for(g=j=0;j<strlen(v[i]);g+=c[r])
			{
				r=v[i][j++]-'1';
				t[c[r]]=!strncpy(t,w[i]+g,c[r]);
				*s[r]?f&=!strcmp(s[r],t):strcpy(s[r],t);
			}
			for(i=0;f&i<k;)puts(s[i++]);
		}
	}
} ./Main.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(k,n)
 ^
