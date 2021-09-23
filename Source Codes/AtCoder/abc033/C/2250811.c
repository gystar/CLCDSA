#include <stdio.h>
int main() {
	char s[100010];
	long int ans = 0;
	int x = 0;
	scanf("%s", &s);
	x = s[0] - '0';
	for (int i = 2; s[i]!='\0'; i += 2)
	{
		x = x ? 1 : 0;
		if (s[i - 1] == '+')
		{
			if (x) ans++;
			x = s[i] - '0';
		}
		else
		{
			x *= s[i] - '0';
		}
	}
	if (x) ans++;
	printf("%ld\n", ans);
	return 0;
} 