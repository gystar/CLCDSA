#include <stdio.h>

int main(void){
	int n, m;
	int x, y, in;
	scanf("%d %d %d %d", &n, &m, &x, &y);
	for(int i = 0; i < n; i++){
		scanf("%d", &in);
		if(x < in)x = in;
	}
	for(int i = 0; i < m; i++){
		scanf("%d", &in);
		if(in < y)y = in;
	}
	if(x < y)printf("No ");
	printf("War\n");
	return 0;
} 