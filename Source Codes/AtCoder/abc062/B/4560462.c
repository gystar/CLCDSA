#include <stdio.h>

int main (void){

	int H, W;
	scanf("%d", &H);
	scanf("%d", &W);

	int i, j;
	char a[1000][1000];

 	for(i = 0; i < H; i++){
   		scanf("%s", a[i]);  
 	}
	
	char b[1000][1000];

	for(i = 0; i < H + 2; i++){
                for(j = 0; j < W + 2; j++){
                        b[i][j] = '#';
                }
        }

	for(i = 1; i < H + 1; i++){
                for(j = 1; j < W + 1; j++){
                        
			b[i][j] = a[i - 1][j - 1];
                }
        }	

	for(i = 0; i < H + 2; i++){
  		 printf("%s\n", b[i]);  
 	}	

	return 0;

} 