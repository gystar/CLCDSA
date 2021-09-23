#include<stdio.h>

int main(){
	int W,a,b;
	scanf("%d%d%d",&W,&a,&b);
	int res;
	if(a>b){
		if(a-b<=W){
			printf("0");
		}
		else if(a-b>W){
			printf("%d",a-b-W);
		}
	}
	else if(a<b){
		if(b-a<=W){
			printf("0");
		}
		else if(b-a>W){
			printf("%d",b-a-W);
		}
	}
	else{
		printf("0");
	}
} 