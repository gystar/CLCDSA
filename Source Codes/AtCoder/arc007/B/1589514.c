#include<stdio.h>
#include<stdlib.h>

#define swap(type, a, b) do{type temp = a; a = b; b = temp;}while(0)

int main()
{
	int n, m, i, t = 0;
	int *d;

	scanf("%d%d", &n, &m);
	d = (int *)calloc(n, sizeof(int));
	for(i = 0; i < n; i++)
		d[i] = i + 1;

	for(i = 0; i < m; i++)
	{
		int num, j;

		scanf("%d", &num);

		if(num == t)
			continue;

		for(j = 0; j < n; j++)
			if(d[j] == num)
				break;

		swap(int, t, d[j]);
	}

	for(i = 0; i < n; i++)
		printf("%d\n", d[i]);

	return 0;
} 