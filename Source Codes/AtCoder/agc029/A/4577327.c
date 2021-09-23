#include <stdio.h>
#include <string.h>
#define ll long long int
int main(void){
	ll i,ans=0,b=0;
	char S[200001];
	scanf("%s",S);
	for(i=0;i<strlen(S);i++){
		if(S[i] == 'B')	b++;
		else ans += b;
	}
	printf("%lld",ans);
	return 0;
} 