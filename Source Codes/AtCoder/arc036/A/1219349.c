#include <stdio.h>
int sum[100001];
 int main(void)
 {
 	int n,k;
 	scanf("%d %d",&n,&k);
 	for(int i=1;i<=n;i++){
 		scanf("%d",&sum[i]);
 		sum[i]+=sum[i-1];
 	}
 	for(int i=3;i<=n;i++){
 		if(sum[i]-sum[i-3]<k){
 			printf("%d\n",i);
 			return 0;
 		}
 	}
 	puts("-1");
 	return 0;
 } 