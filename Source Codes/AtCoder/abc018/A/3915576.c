#include <stdio.h>

int main(){
	int min = 100, max = 0, mini, maxi, in;
	for(int i = 0; i < 3; i++){
		scanf("%d", &in);
		if(in < min){
			min = in;
			mini = i;
		}
		if(max < in){
			max = in;
			maxi = i;
		}
	}
	for(int i = 0; i < 3; i++){
		if(i == mini)
			printf("3\n");
		else if(i == maxi)
			printf("1\n");
		else
			printf("2\n");
	}
	return 0;
} 