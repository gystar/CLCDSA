#include<stdio.h>
#include<string.h>

int main() {
	int start[26];
	int goal[26];
	for (int i = 0; i < 26; i++) {
		start[i] = -1;
		goal[i] = -1;
	}
	char S[200002], T[200002];
	scanf("%s%s", S, T);
	//printf("%s %s", S, T);
	for (int i = 0; i < strlen(S); i++) {
		int a = S[i] - 'a';
		int b = T[i] - 'a';
		if (start[a] != -1 || goal[b] != -1) {
			if (start[a] != b || goal[b] != a) {
				puts("No");
				return 0;
			}
		}
		else {
			start[a] = b;
			goal[b] = a;
		}
	}
	puts("Yes");
	return 0;
} 