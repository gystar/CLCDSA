#include <stdio.h>
int main(void){
	int A,B,C,a=1,b=1,c=1;
	scanf("%d%d%d",&A,&B,&C);
	if(A>B) b++;
	else a++;
	if(B>C) c++;
	else b++;
	if(C>A) a++;
	else c++;
	printf("%d\n%d\n%d\n",a,b,c);
	return 0;
} 