#include<stdio.h>
int main(){
	int N,i,j,a=0,b=0;
	scanf("%d",&N);
	int d[100];
	for(i=0;i<N;i++){
		scanf("%d",&d[i]);
	}
	for(i=0;i<N;i++){
		for(j=i+1;j<N;j++){
			if(d[i]<d[j]){
				a=d[i];
				d[i]=d[j];
				d[j]=a;
			}
		}
	}
	for(i=0;i<N;i++){
		if(d[i]!=d[i+1]){
			b++;
		}
	}
	printf("%d",b);
	return 0;
} 