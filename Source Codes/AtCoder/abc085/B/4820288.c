#include<stdio.h>
int main(void){
	int N,i,j,k,sum=0;
	int a[100]={0};
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<N-1;i++){
		for(j=i+1;j<N;j++){
			if(a[i]>a[j]){
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
	for(i=0;i<N;i++){
		if(a[i]==a[i+1]){
			continue;
		}else{
			sum++;
		}
	}
	printf("%d\n",sum);
	
} 