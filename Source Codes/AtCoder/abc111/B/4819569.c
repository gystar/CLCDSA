#include<stdio.h>
int main(void){
	int N;
	scanf("%d",&N);
	int a;
	if((N%111)==0){
		printf("%d",N);
	}else{
		printf("%d",((N/111)+1)*111);
	}
return 0;
} 