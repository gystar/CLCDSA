#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void){
	char N[5];
  	int cnt;
	char tmp;
	scanf("%s", N);
	for (int i = 0; i < 2; i++) {
		if (N[i]==N[i+1]&&N[i+1]==N[i+2]) cnt++;
	}
	if (cnt >= 1) {
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	return 0;
} 