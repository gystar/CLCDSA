#include<stdio.h>
int main(void){
	int A,B;
	scanf("%d%d",&A,&B);
	if(((A*B)%2)==1){
		printf("Yes");
	}else{
		printf("No");
	}
return 0;
} 