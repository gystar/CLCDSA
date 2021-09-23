#include <stdio.h>
int main(void){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a!=1 && b!=1){
		if(a>b) printf("Alice\n");
		else if(a<b) printf("Bob\n");
		else printf("Draw\n");
	}
	else{
		if(a==1 && b!=1) printf("Alice\n");
		else if(a!=1 && b==1) printf("Bob\n");
		else printf("Draw\n");
	}
	return 0;
} 