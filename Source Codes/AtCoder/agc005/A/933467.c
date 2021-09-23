#include<stdio.h>
#include<string.h>

int main()
{
	char str[200001];
	int sum= 0, count= 0, i;

	scanf("%s", str);

	for(i= 0; i< strlen(str); i++)
	{
		if(str[i]== 'S')
			count++;
		else if(count)
			count--;
		else
			sum++;
	}

	printf("%d\n", sum+ count);

	return 0;
} 