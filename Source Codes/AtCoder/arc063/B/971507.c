#include<stdio.h>
#include<string.h>

int main(void){
	int n,t,i,a,cpest = 1000000007,hiest = 0,c = 0;
	scanf("%d%d",&n,&t);
	for(i = 1;i <= n;i++){
		scanf("%d",&a);
		if(i == 1){cpest = a;}
		else{
			if(cpest > a){cpest = a;}
			if((a - cpest) > hiest){c = 1;hiest = a - cpest;}
			else if((a - cpest) == hiest){c++;}
		}
	}
	printf("%d\n",c);
	return 0;
} 