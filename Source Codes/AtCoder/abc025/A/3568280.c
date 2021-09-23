#include <stdio.h>
int main(){
	char a[5];
	int b;
	scanf("%s",&a);
	scanf("%d",&b);
	printf("%c%c\n",a[(b-1)/5],a[(b-1)%5]);
} 