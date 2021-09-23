#include<stdio.h>
int main(void){
	int N,a[100]={0},i,j,buff,G=0;
	scanf("%d\n",&N);
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<N;i++){
		for(j=i;j<N;j++){
			if(a[i]<a[j]){
				buff=a[i];
				a[i]=a[j];
				a[j]=buff;
			}
		}
	}
	for(i=0;i<N;i+=2){
		G+=a[i]-a[i+1];
	}
	printf("%d\n",G);
	return 0;
} 