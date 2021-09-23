#include<stdio.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)

char s[99][99];
int q[9999],qcnt=0,qpnt=0;
int d[5]={1,0,-1,0,1};
int main(){
	int h,w;
	scanf("%d%d\n",&h,&w);
	rep(i,1,h+1)gets(s[i]+1);
	s[1][1]=0;
	qcnt=1;
	qpnt=0;
	q[0]=10101;
	while(qpnt<qcnt){
		int x=q[qpnt]/100%100,y=q[qpnt]%100;
		if(x==h&&y==w)break;
		rep(i,0,4)if(s[x+d[i]][y+d[i+1]]=='.'){
			s[x+d[i]][y+d[i+1]]=0;
			q[qcnt++]=(q[qpnt]/10000+1)*10000+(x+d[i])*100+(y+d[i+1]);
		}
		qpnt++;
	}
	if(qpnt==qcnt){
		puts("-1");
		return 0;
	}
	int ans=h*w-q[qpnt]/10000;
	rep(i,1,h+1)rep(j,1,w+1)if(s[i][j]=='#')ans--;
	printf("%d\n",ans);
	return 0;
} 