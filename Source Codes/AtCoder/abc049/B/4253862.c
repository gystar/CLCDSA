#include<stdio.h>
#include<string.h>
#include<math.h>
int main() {
	int i,j;
	char w[100][100];
	scanf("%d %d",&i,&j);
	for(int a=0; a<i; a++) {
		getchar();
		for(int b=0; b<j; b++) {
			scanf("%c",&w[a][b]);
		}
	}
	for(int a=0; a<i; a++) {
		for(int b=0; b<j; b++) {
			printf("%c",w[a][b]);
		}
		printf("\n");
		for(int b=0; b<j; b++) {
			printf("%c",w[a][b]);
		}
		printf("\n");
	}
	return 0;
} 