#include <stdio.h>

int main(void)
{
	int proper=700;
	char top[100];
	int i=0;
	scanf("%s", top);
	
	
	
	while(i<3){
		
		if(top[i]=='o'){
			proper=proper+100;
		}
		
		i++;
	}
	
	printf("%d\n",proper);
	
	return 0;
} 