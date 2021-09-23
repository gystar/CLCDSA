#include<stdio.h>
int N, L, ans, i, j, k, l;
char S[301];
int main(void){
	int f;
	scanf("%s%d",S,&N);
	while(S[L]){L++;}
	if(N>L){printf("0\n"); return 0;}
	for(i=0, l=L-N+1; i<l; i++){
		f = 0;
		for(j=i+1; j<l; j++){
			for(k=0; k<N; k++){
				if(S[i+k] != S[j+k]){break;}
				if(k==N-1){f++;}
			}
		}
		if(f==0){ans++;}
	}
	printf("%d\n", ans);
	return 0;
} 