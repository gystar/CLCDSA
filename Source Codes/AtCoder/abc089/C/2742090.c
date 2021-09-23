#include <stdio.h>

int main(void){
	int N;
	scanf("%d",&N);
	int i,j;
	long ans;
	char S[11];
	long name[5] = {0};
	for(i=0;i<N;i++){
		scanf("%s",&S);
		if(S[0] == 'M')	name[0]++;
		if(S[0] == 'A')	name[1]++;
		if(S[0] == 'R')	name[2]++;
		if(S[0] == 'C')	name[3]++;
		if(S[0] == 'H')	name[4]++;
	}
	ans = 	name[0]*name[1]*name[2] +
			name[0]*name[1]*name[3] +
			name[0]*name[1]*name[4] +
			name[0]*name[2]*name[3] +
			name[0]*name[2]*name[4] +
			name[0]*name[3]*name[4] +
			name[1]*name[2]*name[3] +
			name[1]*name[2]*name[4] +
			name[1]*name[3]*name[4] +
			name[2]*name[3]*name[4] ;
			
	printf("%lld",ans);
	return 0;
} 