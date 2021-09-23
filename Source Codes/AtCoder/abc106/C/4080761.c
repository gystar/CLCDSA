#include <stdio.h>

int main(void)
{
	char s[102];
	long long k,i;
	scanf("%s",s);
	scanf("%lld",&k);

	for (i=0;i<k;i++) {
		if (s[i]=='1') continue;
		i++;
		break;
	}
	i--;
	printf("%c\n",s[i]);
	
	return 0;
} 