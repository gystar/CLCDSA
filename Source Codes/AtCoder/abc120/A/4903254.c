#include <stdio.h>
int main(void){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(b/a < c ){
		printf("%d",b/a);
	}else{
		printf("%d",c);
	}
	return 0;
} 