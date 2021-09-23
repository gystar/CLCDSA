#include<stdio.h>
int main(){	
	int a,b;	
	char s;	
	scanf("%d\n",&a);	
	scanf("%c",&s);	
	scanf("%d",&b);	
	if(s=='+')	  
	printf("%d\n",a+b);	
	else	  
	printf("%d\n",a-b);	
	return 0;
} 