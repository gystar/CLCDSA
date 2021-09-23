#include <stdio.h>

int main(void) {
	int A,B,C,K,S,T;
	scanf("%d %d %d %d\n%d %d",&A,&B,&C,&K,&S,&T);
	
	if(S+T >= K) printf("%d\n",A*S+B*T-C*(S+T));
	else printf("%d\n",A*S+B*T);
	return 0;
} 