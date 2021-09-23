#include<stdio.h>
int main() {
	char X[200001];
	int i = 0, c = 0, len, tmp = 0, ans = 0;
	scanf("%s", &X);
	len = strlen(X);
	while (X[i] != 0)
	{
		if (X[i] == 'S')
		{
			c++;
		}
		else if (X[i] = 'T' && c > 0)
		{
			c--;
			tmp++;
		}
		i++;
	}
	ans = len - tmp * 2;
	printf("%d\n", ans);

	return 0;
} 