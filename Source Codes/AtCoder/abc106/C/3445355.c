#include <stdio.h>
#include <string.h>
int main()
{
	char	s[100+1];
	int	c, a;
	unsigned long long	k;
	int	i;

	scanf("%s", s);
	scanf("%lld", &k);

	a = 0;
	c = 0;
	for (i = 0; i < strlen(s); ++i) {
		if (s[i] == '1') {
			c++;
		}
		else {
			a = s[i];
			break;
		}
	}

	if (k <= c) {
		a = '1';
	}
	printf("%c\n", a);

	return 0;
} 