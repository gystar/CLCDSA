#include <stdio.h>

int main(){
	char S[4];
	scanf("%s", &S);
	int sum = 0;
	for(int i=0;i<4;i++){
		if(S[i] == '+') sum += 1;
		else sum -= 1;
	}
	printf("%d", sum);
	return 0;
} 