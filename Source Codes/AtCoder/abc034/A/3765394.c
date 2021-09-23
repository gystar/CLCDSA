#include<stdio.h>
int x, y;
int main(){
	scanf("%d%d", &x, &y);
	if(x<y){
		printf("Better\n");
	}else{
		printf("Worse\n");
	}
} 