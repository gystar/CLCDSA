#include<stdio.h>
#include<stdlib.h>
int main(){
	int N,a[100],i,j,temp,ali=0,bob=0;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	
	for (i = 0; i < (N - 1); i++) {
		for (j = (N - 1); j > i; j--) {
			if (a[j-1] < a[j]) {
        	temp = a[j-1];
        	a[j-1] = a[j];
        	a[j] = temp;
			}
		}
 	}
	for(i=0;i<N;i++){
		if(i%2 == 1){
			bob += a[i];
		}else{
			ali += a[i];
		}
	}
	printf("%d\n",ali - bob);
	return 0;
} 