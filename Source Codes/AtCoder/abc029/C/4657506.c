#include <stdio.h>
#include <stdlib.h>

char word[9];
int N;
void pass(int n){
	if(n==N){
		printf("%s\n",word);
		return;
	}
	word[n] = 'a';
	pass(n+1);
	word[n] = 'b';
	pass(n+1);
	word[n] = 'c';
	pass(n+1);
}

int main(void){
	scanf("%d",&N);
	pass(0);
	
	return 0;
} 