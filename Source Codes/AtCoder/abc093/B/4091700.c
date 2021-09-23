#include<stdio.h>

int main(){
	long a,b,k,i;
	scanf("%ld%ld%ld",&a,&b,&k);
	for(i=0;i<k;i++){
		if(i>=b-a+1)return 0;
		printf("%ld\n",a+i);
	}
	//for(i=k-1;i>=0;i--)printf("%ld\n",b-i);
	if(b-a+1>=k*2){
		for(i=k-1;i>=0;i--)printf("%ld\n",b-i);
	}
	else {
		for(i=k-1-(k*2-b+a-1);i>=0;i--)printf("%ld\n",b-i);
	}
	return 0;
} 