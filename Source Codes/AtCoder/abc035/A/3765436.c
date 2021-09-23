#include<stdio.h>
int W, H;
int main(){
	scanf("%d%d", &W, &H);
	if(W*3 == H*4){
		printf("4:3\n");
	}else if(W*9 == H*16){
		printf("16:9\n");
	}else{
		printf("%d:%d\n", W, H);
	}
} 