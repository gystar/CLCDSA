#include <stdio.h>

int main(void)
{
	int a,b,c;
	int count=0;
	int sum=0;
	
	scanf("%d%d%d",&a,&b,&c);
	
	for(int i=0;i<101;i++){
		
		sum=sum+a;
		
		if(sum%b==c){
			count++;
		}
	}
	
	if(count!=0){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	
	return 0;
} 