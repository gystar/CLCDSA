#include <stdio.h>

int main(void){

	int A, B, C, X;

	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &X);

	int count = 0;
	int i, j;

	if( X % 50 != 0){
		
		printf("%d\n", count);
	
	}else{
		
		for(i = 0; i <= X/500; i++){
			if(i <= A){
				int rest1 = X - 500 * i;
				for(j = 0; j <= rest1/100; j++){
					int rest2 = rest1 - 100 * j;
					if(j <= B){
						int rest3 = rest2 / 50;
						if(rest3 <= C){
							count++;
						}
					}
				}
			}
		}
		printf("%d\n", count);	
	}	


} 