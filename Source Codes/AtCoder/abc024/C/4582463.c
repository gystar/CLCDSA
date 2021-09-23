#include<stdio.h>

int main(){
		int d,k,i,j;
		long long n,lr[10000][2],st[100][3];
		scanf("%lld%d%d",&n,&d,&k);
		for(i=0;i<d;i++)scanf("%lld%lld",&lr[i][0],&lr[i][1]);
		for(i=0;i<k;i++){
				scanf("%lld%lld",&st[i][0],&st[i][2]);
				st[i][1]=st[i][0];
		}
		for(i=0;i<k;i++){
				for(j=0;j<d;j++){
						if(lr[j][0]<=st[i][0]&&lr[j][1]>=st[i][0]){
								st[i][0]=lr[j][0];
						}
						if(lr[j][0]<=st[i][1]&&lr[j][1]>=st[i][1]){
								st[i][1]=lr[j][1];
						}
						if(st[i][1]>=st[i][2]&&st[i][0]<=st[i][2]){
								printf("%d\n",j+1);
								break;
						}
				}
		}
		return 0;
} 