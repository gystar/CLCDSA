#include <stdio.h>
int main(void){
	int a,b,n;
	scanf("%d%d%d",&a,&b,&n);
	while(1){
		if(n%a==0 && n%b==0){
			printf("%d\n",n);
			break;
		}
		n++;
	}
	return 0;
} 