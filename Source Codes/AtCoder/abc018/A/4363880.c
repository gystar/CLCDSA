#include <stdio.h>

int main(void)
{
	int score[100];
	int max=-1;
	int min=1000;
	
	for(int i=0;i<3;i++){
		
		scanf("%d",&(score[i]));
	
	}
	
	for(int i=0;i<3;i++){
		
		if(score[i]>=max){
			max=score[i];
		}
		if(score[i]<=min){
			min=score[i];
		}
		
	}
	
	for(int i=0;i<3;i++){
		
		if(score[i]==max){
			printf("1\n");
		}else if(score[i]==min){
			printf("3\n");
		}else{
			printf("2\n");
		}
		
	}
	
	return 0;
} 