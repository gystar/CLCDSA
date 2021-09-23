#include <stdio.h>
int main(void){
	int a,b,i=0,honsuu=0;
	scanf("%d%d",&a,&b);
	while(honsuu<b){
		i++;
		honsuu+=a;
	}
	printf("%d\n",i);
	return 0;
} 