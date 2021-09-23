#include <stdio.h>
int max(int a,int b){
	return a>b?a:b;
}
int main(void){
	int a,b,c,d,e;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	printf("%d\n",max(a+d+e,b+c+e));
	return 0;
} 