#include <stdio.h>
int main(void){
	long long int n,i,p[1000],v=0;
	char s[1000][21];
	scanf("%lld",&n);
	for(i=0;i<n;i++){
		scanf("%s%lld",s[i],&p[i]);
		v+=p[i];
	}
	for(i=0;i<n;i++){
		if(p[i]>v/2){
			printf("%s\n",s[i]);
			return 0;
		}
	}
	printf("atcoder\n");
	return 0;
} 