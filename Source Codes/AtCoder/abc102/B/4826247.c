#include<stdio.h>
#include<stdlib.h>
int main(void){
	int N;
	scanf("%d",&N);
	int a,b;
	int A[N];
	int max=0;
	for(a=0;a<N;a++){
		scanf("%d",&A[a]);
		for(b=0;b<a;b++){
			if((abs(A[a]-A[b]))>max){
				max=abs(A[a]-A[b]);
			}
		}
	}
	printf("%d",max);
return 0;
} 