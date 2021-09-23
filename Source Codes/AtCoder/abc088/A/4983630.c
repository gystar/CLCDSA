#include <stdio.h>

int main(){
	int n,a;
	scanf("%d",&n);
	scanf("%d",&a);
	int x = n%500;
	if(x>a){
		printf("No");
	}else{
		printf("Yes");
	}
	return 0;
} 