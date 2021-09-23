#include <stdio.h>

int N;
char password[10];

void dfs(int depth){

	if(depth==N){
	int i;

	for(i=0;i<N;i++){
		printf("%c",password[i]);
	}
	printf("\n");
	return;
	}
	password[depth]='a';
	dfs(depth+1);
	password[depth]='b';
	dfs(depth+1);
	password[depth]='c';
	dfs(depth+1);
}

int main(){

	scanf("%d",&N);

	dfs(0);

return 0;
} 