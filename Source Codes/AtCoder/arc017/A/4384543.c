#include<stdio.h>

int main(){
		int n,i;
		scanf("%d",&n);
		for(i=2;i*i<=n;i++){
				if(n%i==0){
						puts("NO");
						return 0;
				}
		}
		if(n==1)puts("NO");
		else puts("YES");
		return 0;
} 