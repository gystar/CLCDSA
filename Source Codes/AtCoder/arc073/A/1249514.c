#include<stdio.h>

int main(void){
	int n,t,i,f,res = 0,d[262144];
	scanf("%d%d",&n,&t);
	for(i = 1;i <= n;i++){
		scanf("%d",&d[i]);
		if(i == 1){f = d[i];}
		else{
			if(d[i] - d[i-1] > t){res+=(d[i-1]+t-f);f=d[i];}
		}
	}
	res+=(d[n]+t-f);
	printf("%d\n",res);
	return 0;
} 