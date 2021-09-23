#include<stdio.h>

int main(){
		int n,m,a,b,i,c[100];
		scanf("%d%d%d%d",&n,&m,&a,&b);
		for(i=0;i<m;i++)scanf("%d",&c[i]);
		for(i=0;i<m;i++){
				if(n<=a)n+=b;
				n-=c[i];
				if(n<0){
						printf("%d\n",i+1);
						return 0;
				}
		}
		puts("complete");
		return 0;
} 