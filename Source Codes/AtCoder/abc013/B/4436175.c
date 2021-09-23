#include <stdio.h>
#include <stdlib.h>
int main(void){
	int a,b,i;
	scanf("%d%d",&a,&b);
	if(abs(b-a)<=abs(b-10-a) && abs(b-a)<=abs(b+10-a)) printf("%d\n",abs(b-a));
	else if(abs(b-10-a)<=abs(b-a) && abs(b-10-a)<=abs(b+10-a)) printf("%d\n",abs(b-10-a));
	else printf("%d\n",abs(b+10-a));
	return 0;
} 