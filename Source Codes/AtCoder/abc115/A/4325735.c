#include <stdio.h>

int main(void)
{
	int d;
	scanf("%d",&d);
	printf("Christmas ");

	switch(d){
	case 22:
			printf("Eve Eve Eve\n");
			break;
	case 23:
		printf("Eve Eve\n");
		break;
	case 24:
		printf("Eve\n");
		break;
	case 25:
		printf("\n");
		break;
	}
	
	return 0;
} 