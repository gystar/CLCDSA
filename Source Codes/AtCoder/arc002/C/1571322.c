#include<stdio.h>

char command[4];
char c[4] = {'A', 'B', 'X', 'Y'};
int min = 1000;

void check(char *p, char *t)
{
	int cnt = 0;
	while(*p)
	{
		if(p[0] == t[0] && p[1] == t[1])
			p += 2;
		else if(p[0] == t[2] && p[1] == t[3])
			p += 2;
		else
			p++;

		cnt++;
	}

	if(min > cnt)
		min = cnt;
}

void backtrack(char *p, int num)
{
	int i;

	if(num == 4)
		check(p, command);
	else
		for(i = 0; i < 4; i++)
		{
			command[num] = c[i];
	
			backtrack(p, num + 1);
		}
}
			
		
int main()
{
	int n, i;
	char *p;

	scanf("%d", &n);

	while(getchar() != '\n')
		;

	p = (char *)calloc(n + 1, sizeof(char));

	for(i = 0; i < n; i++)
		p[i] = getchar();

	p[i] = '\0';

	backtrack(p, 0);

	printf("%d\n", min);

	return 0;
} 