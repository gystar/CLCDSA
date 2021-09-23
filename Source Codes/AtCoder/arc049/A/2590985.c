#pragma warning(disable:4996) 
#include<stdio.h>

#include<string.h>
int main()
{
	char s[256];
	int a, b, c, d;
	scanf("%s", s);
	scanf("%d%d%d%d", &a, &b, &c, &d);
	int len = strlen(s);
	int j = 4;
	for (int i = len + 3;i >= 0;i--) {
		if (i == a || i == b + 1 || i == c + 2 || i == d + 3) {
			s[i] = '"';
			j--;
		}
		else {
			s[i] = s[i - j];
		}
	}
	s[len + 4] = '\0';
	printf("%s\n", s);

	return 0;
} 