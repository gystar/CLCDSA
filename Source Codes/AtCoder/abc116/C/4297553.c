#include <stdio.h>

int main(void){
	int n, h[105], log = 0, count = 0, t;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", h + i);
	for(int i = 1; i <= 100; i++){
		t = 0;
		for(int j = 0; j < n; j++){
			if(h[j] >= i && t == 0){
				t = 1;
				count++;
			}else if(h[j] < i && t == 1)t = 0;
		}
	}
	printf("%d\n", count);
	return 0;
} 