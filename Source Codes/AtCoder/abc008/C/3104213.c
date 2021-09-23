#include<stdio.h>

int main(){
	int N,i,j,c;
	float sum=0;
	scanf("%d",&N);
	int C[N];
	for(i=0;i<N;i++) scanf("%d",&C[i]);
	
	for(i=0;i<N;i++){
		c=0;
		for(j=0;j<N;j++){
			if(C[i]%C[j]==0) c++;
		}
		if(c%2==0) sum+=0.5;
		else sum+=(float)(c+1)/(2*c);
	}
	
	printf("%f\n",sum);
} 