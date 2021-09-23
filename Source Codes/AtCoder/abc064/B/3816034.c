#include<stdio.h>
short N, i;
short a, min, max;
int main(){
	scanf("%hd", &N);
	scanf("%hd", &a);
	min=max=a;
	for(i=1; i<N; i++){
		scanf("%hd", &a);
		if(a<min){
			min=a;
		}else if(a>max){
			max=a;
		}
	}
	printf("%d\n", max-min);
} 