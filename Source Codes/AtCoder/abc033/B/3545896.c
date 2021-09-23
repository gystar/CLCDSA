#include <stdio.h>
#define ll long long int
int main(void){
	int n,i;
	scanf("%d",&n);
	char s[n][21];
	ll p[n],sum=0;
	for(i=0;i<n;i++){
		scanf("%s %lld",s[i],&p[i]);
		sum+=p[i];
	}
	for(i=0;i<n;i++){
		if(sum*0.5 < p[i]){
			printf("%s\n",s[i]);
			return 0;
		}
	}
	printf("atcoder\n");
	return 0;
} 