#include <stdio.h>

int main(void)
{
	int a,b;
	int sum=0;
	
	scanf("%d%d",&a,&b);
	
	if(b<10){
		sum=a*10+b;
	}else if(b<100){
		sum=a*100+b;
	}else{
		sum=a*1000+b;
	}
	
	int count=0;
	
	for(int i=1;i<350;i++){
		if(i*i==sum){
			count++;
			break;
		}
	}
	
	if(count!=0){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	
	return 0;
} 