#include<stdio.h>
int MIN(int a,int b){return a<b?a:b;}
int MAX(int a,int b){return a<b?b:a;}
int main(){
	int n,m,min[3],max[3],h[3],t[3],a=0,i;
	scanf("%d",&n);
	while(n--){
		for(i=0;i<3;i++)scanf("%d",&t[i]);
		for(i=0;i<3;i++)min[i]=t[i];
		for(i=0;i<3;i++)max[i]=0;
		scanf("%d",&m);
		while(m--){
			for(i=0;i<3;i++)scanf("%d",&h[i]);
			for(i=0;i<3;i++)min[i]=MIN(min[i],h[i]);
			for(i=0;i<3;i++)max[i]=MAX(max[i],h[i]);
		}
		for(i=0;i<3;i++)a^=min[i];
		for(i=0;i<3;i++)a^=t[i]-max[i]-1;
	}
	printf("%s\n",a?"WIN":"LOSE");
	return 0;
} 