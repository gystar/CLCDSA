#include<stdio.h>

int main(){
	int sx,sy,tx,ty,i;
	scanf("%d%d%d%d",&sx,&sy,&tx,&ty);
	for(i=0;i<ty-sy;i++)printf("U");
	for(i=0;i<tx-sx;i++)printf("R");
	for(i=0;i<ty-sy;i++)printf("D");
	for(i=0;i<=tx-sx;i++)printf("L");
	for(i=0;i<=ty-sy;i++)printf("U");
	for(i=0;i<=tx-sx;i++)printf("R");
	printf("DR");
	for(i=0;i<=ty-sy;i++)printf("D");
	for(i=0;i<=tx-sx;i++)printf("L");
	printf("U\n");
	return 0;
} 