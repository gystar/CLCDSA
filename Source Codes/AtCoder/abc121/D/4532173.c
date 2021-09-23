#include<stdio.h>
#include<stdint.h>
 
//0??n???XOR
uint64_t XOR(uint64_t n){
	if(n==-1) return 0;
	else if(n%4==1){
		return 1;
	}
	else if(n%4==3){
		return 0;
	}
	else if(n%4==2){
		return 1^n;
	}
	else{
		return n;
	}
}
	
int main(void){
	uint64_t A,B;
	scanf("%llu %llu",&A,&B);
	
	printf("%llu",XOR(A-1)^XOR(B));
} 