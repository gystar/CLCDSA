#include <stdio.h>

int main(void)
{
	int  n, i, g_cnt = 0, p_cnt = 0;
	char s[100000];
	gets(s);
	for(i = 0; i < 100000; i++){
		if(s[i] == 'g')g_cnt++;
		else if(s[i] == 'p')p_cnt++;
		else break;
		}
		printf("%d\n", (g_cnt - p_cnt) / 2);
		
		
	return 0;
} 