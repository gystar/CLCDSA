#include <stdio.h>

int main() {
	char S[11];
	scanf("%10s", S);
	int ans=0;
	int i;
	for(i=0; S[i]!='\0'; i++) {
		if((S[i]>='0') && (S[i]<='9')) {
			if((S[i+1]>='0') && (S[i+1]<='9')) ans=10*(S[i]-'0')+S[i+1]-'0';
			else ans=S[i]-'0';
			break;
		}
	}
	printf("%d", ans);
	return 0;
} 