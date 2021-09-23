#include <stdio.h>

int main(void){
	int prime[100001]={0};
	
	for(int i=2;i<=100001;i++){
		if(prime[i] == 0){
			prime[i] = 1;
			for(int j=i+i;j<=100001;j+=i){
				prime[j] = -1;
			}
		}
	}
	
	int c[100002]={0};
	for(int i=1;i<=100001;i+=2){
		if(prime[i]==1 && prime[(i+1)/2]==1)c[i]=1;
	}
	
	for(int i=1;i<=100002;i++){
		if(c[i]>=1)c[i] = c[i-1]+1;
		else c[i] = c[i-1];
	}
	
	int Q;
	scanf("%d",&Q);
	for(int i=0;i<Q;i++){
		int l,r;
		scanf("%d%d",&l,&r);
		printf("%d\n",c[r]-c[l-1]);
	}
	return 0;
} 