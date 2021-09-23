#include <stdio.h>
int main(void){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c && c==a) printf("%d\n",1);
	else if(a==b || b==c || c==a) printf("%d\n",2);
	else printf("%d\n",3);
	return 0;
} 