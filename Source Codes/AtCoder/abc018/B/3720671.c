#include<stdio.h>
char S[101];
int N, l, r, i;
int main(){
	scanf("%s%d", &S, &N);
	for(i=0; i<N; i++){
		scanf("%d%d", &l, &r);
		l--; r--;
		while(l<r){
			S[l]^=S[r]; S[r]^=S[l]; S[l]^=S[r];
			l++; r--;
		}
	}
	printf("%s\n", S);
} 