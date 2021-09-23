#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int A,B,C,D,i;
	char S[101];
	scanf("%s",S);
	scanf("%d %d %d %d",&A,&B,&C,&D);
	for(i=0;i<A;i++){
		printf("%c",S[i]);
	}
	printf("\"");
	for(i=A;i<B;i++){
		printf("%c",S[i]);
	}
	printf("\"");
	for(i=B;i<C;i++){
		printf("%c",S[i]);
	}
	printf("\"");
	for(i=C;i<D;i++){
		printf("%c",S[i]);
	}
	printf("\"");
	for(i=D;i<strlen(S);i++){
		printf("%c",S[i]);
	}
	printf("\n");
	
	return 0;
} 