#include <stdio.h>
int main(void){
	int n,ame=0;
	scanf("%d",&n);
	while(n!=0){
		ame+=n;
		n--;
	}
	printf("%d\n",ame);
	return 0;
} 