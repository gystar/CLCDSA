#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	int n;
	int cost=0;
	scanf("%d",&n);
	cost=(n/10)*100;
	if(n%10>=7)cost+=100;
	else   cost+=n%10*15;
	printf("%d\n",cost);
	return 0;
} 