#include<stdio.h>

int main()
{
	int num, length, arr[100000], i, check= 0, temp;

	scanf("%d%d", &num, &length);
	for(i= 0; i< num; i++)
	{
		scanf("%d", &arr[i]);
		if(i && arr[i- 1]+ arr[i]>= length)
		{
			check= 1;
			temp= i;
		}
	}

	if(check)
	{
		printf("Possible\n");
		for(i= 1; i< temp; i++)
			printf("%d\n", i);
		for(i= num- 1; i>= temp; i--)
			printf("%d\n", i);
	}
	else
		printf("Impossible\n");

	return 0;
} 