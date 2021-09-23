#include <stdio.h>
#include <math.h>

int main(void)
{
	char n[100];
	int sum=0;
	int ans=0;
	int count=0;
	scanf("%s",n);
	
	for(int i=0;n[i]!='\0';i++){
		sum=(n[i]-'0')+sum;
		count++;
	}
	
	for(int i=count-1;i>=0;i--){
		ans=ans+(n[i]-'0')*pow(10,count-1-i);
	}
	
	if(ans%sum==0){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	
	return 0;
} 