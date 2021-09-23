#include<stdio.h>

int main(){
		int n,a,b;
		scanf("%d%d%d",&n,&a,&b);
		if(n>=5)printf("%d\n",b*5+a*(n-5));
		else printf("%d\n",b*n);
		return 0;
} 