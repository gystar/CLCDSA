#include<stdio.h>

//#define DEBUG1
//#define DEBUG2
//#define DEBUGF

int main(void) {
	char s[262144], t[4] = "ICT", u[4] = "ict";
	int i, l,j=0;
	scanf("%s", s);
	l = strlen(s);
	for (i = 0; i < l; i++) {
		if (s[i] == t[j] || s[i] == u[j]) {
			j++;
		}
	}
	if (j == 3) { printf("YES\n"); }
	else { printf("NO\n"); }

#ifdef DEBUGF
	getch();
#endif
	return 0;
} 