#include<stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	char S[N+1];
	scanf("%s",S);
	int l=0,r=0;
	int pl=0,pr=0;
	for(int i=0;i<N;i++){
		if(S[i]=='('){
			l++;
		}
		else{
			r++;
			if(l==0)pl++;
			else l--;
		}
	}
	for(int i=0;i<pl;i++)printf("(");
	for(int i=0;i<N;i++)printf("%c",S[i]);
	for(int i=0;i<l;i++)printf(")");
	printf("\n");
	
	return 0;
} 