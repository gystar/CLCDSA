#include <stdio.h>
int main(void){
	int n,a,b,k,p,i;
	int ks[101]={0};
	scanf("%d%d%d%d",&n,&a,&b,&k);
	for(i=0;i<k;i++){
		scanf("%d",&p);
		if(p==a || p==b || ks[p]==1){
			printf("NO\n");
			return 0;
		}
		ks[p]++;
	}
	printf("YES\n");
	return 0;
} 