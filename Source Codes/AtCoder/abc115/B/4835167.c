#include <stdio.h>

int main(void){
	int N,i;
	int max=0;
	int ans=0;
	int temp;
	int p[10000]={};
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&temp);
		ans += temp;
		if(max < temp){
			max = temp;
		}
	}
	printf("%d",ans-(max)/2);
	return 0;
} 