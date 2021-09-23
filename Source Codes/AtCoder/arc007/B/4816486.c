#include<stdio.h>

int main(){
	int n,m,i,j,d[101],num[101];
	scanf("%d%d",&n,&m);
	for(i=0;i<m;i++)scanf("%d",&d[i]);
	for(i=0;i<=n;i++)num[i]=i;
	for(i=0;i<m;i++){
		int tmp;
		for(j=0;j<=n;j++){
			if(num[j]==d[i]){
				tmp=j;
				break;
			}
		}
		int ttmp=num[0];
		num[0]=num[tmp];
		num[tmp]=ttmp;
	}
	for(i=1;i<=n;i++)printf("%d\n",num[i]);
	return 0;
} 