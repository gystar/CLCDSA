#include <stdio.h>

int main(){
	long long int X, Y;
	scanf("%lld%lld", &X, &Y);
	if(X > Y + 1 || Y > X + 1){
		printf("Alice\n");
	}
	else{
		printf("Brown\n");
	}
	return 0;
} 