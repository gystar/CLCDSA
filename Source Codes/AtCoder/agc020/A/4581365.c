#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,a,b;
	scanf("%d%d%d",&n,&a,&b);
	if(abs(a-b)%2==0)puts("Alice");
	else puts("Borys");
	return 0;
} 