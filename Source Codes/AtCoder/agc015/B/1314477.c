#include <stdio.h>
int main(){
	char s[100010];
	long long n;
	long long ans = 0;
	
	scanf("%s", s);
	for(n = 0; s[n] != 0; n++){}
	
	ans = n*(n - 1);
	
	for(int i = 0; i < n - 1; i++){
		if(s[i] == 'D') ans = (long long int)(ans + n - i - 1);
		else if(s[i] == 'U') ans = (long long int)(ans + i);
	}
	
	printf("%lld\n", ans);
	return 0;
} 