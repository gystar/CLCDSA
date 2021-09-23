#include<stdio.h>

int main(){
		int n,ans=0;
		scanf("%d",&n);
		if(n<=10)ans=n;
		else if(n==100||n==1000||n==10000||n==100000)ans=10;
		else {
				while(n>0){
						int tmp=n%10;
						ans+=tmp;
						n=(n-tmp)/10;
				}
		}
		printf("%d\n",ans);
		return 0;
} 