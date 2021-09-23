#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int N,K;
	scanf("%d%d",&N,&K);
	int res;
	res=K*pow((K-1),(N-1));
	printf("%d",res);
} 