#include <stdio.h>
int main(void){
	int a,b,c;
	int temp;
	scanf("%d %d %d",&a,&b,&c);
	//abc???????????
	if ( a<b){
		temp = a;
		a = b;
		b = temp;
	}
	if ( a<c){
		temp = a;
		a = c;
		c = temp;
	}
	printf("%d",(a*10)+b+c);
	return 0;
} 