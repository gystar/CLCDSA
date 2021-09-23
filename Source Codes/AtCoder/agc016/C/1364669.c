#include <stdio.h>

#define inf (int)(1e8)

int main(){
	int H, W, h, w, i, j;
	scanf("%d%d%d%d", &H, &W, &h, &w);
	if(H % h == 0 && W % w == 0){
		printf("No\n");
	}
	else{
		printf("Yes\n");
		for(i = 1; i <= H; i++){
			for(j = 1; j <= W; j++){
				if(i % h == 0 && j % w == 0){
					printf("%d ", - (1 + inf));
				}
				else if((h == 1 || i % h == 1) && (w == 1 || j % w == 1)){
					printf("%d ", inf);
				}
				else{
					printf("0 ");
				}
			}
			printf("\n");
		}
	}
	return 0;
} 