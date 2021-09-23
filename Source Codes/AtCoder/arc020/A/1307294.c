#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%s\n",abs(a)<=abs(b)?abs(a)<abs(b)?"Ant":"Draw":"Bug");
	return 0;
} 