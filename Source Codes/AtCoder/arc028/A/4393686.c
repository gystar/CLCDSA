#include<stdio.h>

int main(){
		int n,a,b;
		scanf("%d%d%d",&n,&a,&b);
		if(n%(a+b)<=a&&n%(a+b)>0)puts("Ant");
		else puts("Bug");
		return 0;
} 