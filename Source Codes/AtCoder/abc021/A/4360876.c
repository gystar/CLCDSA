#include <stdio.h>

int main(void)

{
	int n;
	
	scanf("%d",&n);
	
	if(n%2==0){
		printf("%d\n",n/2);
		
		for(int i=0;i<(n/2);i++){
			printf("%d\n",2);
		}
	}else{
		printf("%d\n",n/2+1);
		
		for(int i=0;i<(n/2);i++){
			printf("%d\n",2);
		}
			
			printf("1\n");
		}
	
	return 0;
} 