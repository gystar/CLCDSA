#include <stdio.h>
#define inf (int)(2e9)

int only_plus(int x){
	if(x >= 0){
		return x;
	}
	else{
		return inf;
	}
}

int min(int a, int b){
	return a <= b ? a : b;
}

int main(){
	int x, y;
	scanf("%d%d", &x, &y);
	printf("%d\n", min(min(only_plus(y - x), only_plus(1 + y + x)), min(only_plus(1 - y - x), only_plus(2 - y + x))));
	return 0;
} 