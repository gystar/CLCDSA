#include<stdio.h>
#include<stdlib.h>

int main(){
	int* s;
	int n,i,sum=0,min=100;
	scanf("%d",&n);

	s=(int *)malloc(sizeof(int)*n);

	for(i=0;i<n;i++){
		scanf("%d",&s[i]);
	}

	for(i=0;i<n;i++){
		sum+=s[i];
		if(s[i]%10!=0&&min>s[i]){
			min=s[i];
		}
	}

	if(sum%10==0){
		if(min!=100) sum-=min;
		else sum=0;
	}

	printf("%d\n",sum);

	return 0;
} 