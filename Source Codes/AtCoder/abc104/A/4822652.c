#include<stdio.h>
int main(void){
	int R;
	scanf("%d",&R);
	if(R<1200){
		printf("ABC");
	}else if((1200<=R)&&(R<2800)){
		printf("ARC");
	}else{
		printf("AGC");
	}
return 0;
} 