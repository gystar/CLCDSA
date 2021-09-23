#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
	int n,m,a,b,i,day=0;
	int c[110];
	scanf("%d %d %d %d",&n,&m,&a,&b);
	
	for(i=0;i<m;i++){
		scanf("%d",&c[i]);
	}
	
	for(i=0;i<m;i++){
		if(n<=a){
			n=n+b;
		}
		n=n-c[i];
		day++;
		if(n<0){
			printf("%d\n",day);
			break;
		}
	}
	
	if(day==m && n>=0){
		printf("complete\n");
	}
	return 0;
} 