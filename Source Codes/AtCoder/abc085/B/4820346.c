#include<stdio.h>
#include<stdlib.h>
int main(){
	int N,d[100],a[100],temp,count=1,i,j;
	scanf("%d",&N);
	for( i = 0;i < N;i++){
		scanf("%d",&d[i]);
	}
	for (i = 0; i < (N - 1); i++) {
    for (j = (N - 1); j > i; j--) {
      if (d[j-1] < d[j]) {
        temp = d[j-1];
        d[j-1] = d[j];
        d[j] = temp;
      }
    }
  }
	for(i = 1;i < N;i++){
		if(d[i] != d[i-1]){
			count++;
		}
	}
	printf("%d",count);
	return 0;
} 