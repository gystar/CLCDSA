#include <stdio.h>
int main(void){
	int i=0,n,a=0,b=0,c;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&c);
		if(a<c){
			b=a;
			a=c;
		}
		else if(c<a && c>b) b=c;
	}
	printf("%d\n",b);
	return 0;
} 