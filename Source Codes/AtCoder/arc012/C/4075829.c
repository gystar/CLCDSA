char b[19][22];
int d[]={1,0,1,1,-1},cnt[19][19],BC,WC,bc,wc;
main()
{
	for(int i=0;i<19;i++)gets(b[i]);
	for(int i=0;i<19;i++)
	{
		for(int j=0;j<19;j++)
		{
			if(b[i][j]=='.')continue;
			if(b[i][j]=='o')bc++;
			else wc++;
			for(int r=0;r<4;r++)
			{
				int now=1;
				for(int k=1;k<5;k++)
				{
					int tx=i+d[r]*k,ty=j+d[r+1]*k;
					if(tx<0||ty<0||tx>18||ty>18||b[tx][ty]!=b[i][j])
					{
						now=0;
						break;
					}
				}
				if(now)
				{
					if(b[i][j]=='o')BC++;
					else WC++;
					for(int k=0;k<5;k++)cnt[i+d[r]*k][j+d[r+1]*k]++;
				}
			}
		}
	}
	for(int i=0;i<19;i++)for(int j=0;j<19;j++)if(bc-wc==1?!WC&&cnt[i][j]==BC:bc-wc==0&&!BC&&cnt[i][j]==WC)exit(!puts("YES"));
	puts("NO");
} ./Main.c:3:1: warning: return type defaults to �int� [-Wimplicit-int]
 main()
 ^
