#include <stdio.h>

char a[100][100];

int main(){
	int H,W;
	scanf("%d %d",&H,&W);
	int i,j;
	for(i = 0;i<H;i++){
		for(j = 0;j<W;j++){
			scanf(" %c",&a[i][j]);
		}
	}

	for(i = 0;i<H+2;i++){
		for(j = 0;j<W+2;j++){
			if(i == 0 || i == (H+1)){
				printf("#");
			}else{
				if(j == 0 || j == (W+1)){
					printf("#");
				}else{
					printf("%c",a[i-1][j-1]);
				}
			}
		}
		puts("");
	}
	return 0;
} 