#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
	int sx,sy,tx,ty,i;
	scanf("%d %d %d %d",&sx,&sy,&tx,&ty);
	for(i=0;i<abs(tx-sx);i++){
		printf("R");	
	}
	for(i=0;i<abs(ty-sy);i++){
		printf("U");	
	}
	for(i=0;i<abs(tx-sx);i++){
		printf("L");	
	}
	for(i=0;i<abs(ty-sy);i++){
		printf("D");	
	}
	printf("D");
	for(i=0;i<abs(tx-sx+1);i++){
		printf("R");	
	}
	for(i=0;i<abs(ty-sy+1);i++){
		printf("U");	
	}
	printf("L");
	printf("U");
	for(i=0;i<abs(tx-sx+1);i++){
		printf("L");	
	}for(i=0;i<abs(ty-sy+1);i++){
		printf("D");	
	}
	printf("R");
	return 0;
} 