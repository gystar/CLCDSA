#include <stdio.h>
#include <string.h>

int main(){
	char str[120];
	int n,m,k;
	
	scanf("%d%d%d",&n,&m,&k);

	if(n>=m)
	{
		printf("%d",k/m);
	}else{
		printf("%d",k/n);
		}
} 