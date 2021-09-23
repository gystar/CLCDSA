#include<stdio.h>

int main(){
	int n;scanf("%d",&n);
	int a,i,sum=0;
	
	for(i=0;i<n;i++){
		scanf("%d",&a);
		while(a%2==0){sum++;a/=2;}
	}
	
	printf("%d",sum);
	
	return 0;
} 