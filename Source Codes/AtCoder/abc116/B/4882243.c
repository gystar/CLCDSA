#include <stdio.h>

int function(int n){
	if(n%2==0){
		return (n/2);
	}else{
		return (3*n)+1;
	}
}
int a[1000001];
int b[1000001]={};
int main(void){
	int s,i;
	scanf("%d",&s);
	for(i=1;i<=1000000;i++){
		if(i==1){
			a[1]=s;
			b[a[i]]++;
			continue;
		}
		a[i]=function(a[i-1]);
		b[a[i]]++;
		if( b[a[i]]==2){
			printf("%d",i);
			return 0;
		}
	}
	return 0;
} 