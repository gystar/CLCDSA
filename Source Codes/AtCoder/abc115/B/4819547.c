#include<stdio.h>
int main(void){
	int N;
	scanf("%d",&N);
	int a;
	int p[N];
	int max=0;
	int sum=0;
	for(a=0;a<N;a++){
		scanf("%d",&p[a]);
		if(p[a]>max){
			max=p[a];
		}
		sum+=p[a];
	}
	printf("%d",sum-(max/2));
return 0;
} 