#include<stdio.h>
int main(void){
	int N,T;
	scanf("%d%d",&N,&T);
	int a;
	int c,t;
	int min=1001;
	for(a=0;a<N;a++){
		scanf("%d%d",&c,&t);
		if(t<=T){
			if(c<min){
				min=c;
			}
		}
	}
	if(min==1001){
		printf("TLE");
	}else{
		printf("%d",min);
	}
return 0;
} 