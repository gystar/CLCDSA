#include<stdio.h>
int main(void){
	
	char S[3];
	int topping=0,i;
	
	scanf("%s",S);
	
	for(i=0;i<3;i++){
		if(S[i]=='o'){
		topping++;
		}
	}
	
	printf("\n%d\n\n",700+100*topping);
	
	return 0;
} 