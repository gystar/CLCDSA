#include<stdio.h>

int main(){
		int n;
		scanf("%d",&n);
		if(n%10<=6)printf("%d\n",n/10*100+(n%10)*15);
		else if(n%10!=0)printf("%d\n",(n/10+1)*100);
		else printf("%d\n",n*10);
		return 0;
} 