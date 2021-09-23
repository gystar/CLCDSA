#include <stdio.h>

int main(void)
{
	char n[100];
	int no;
	
	scanf("%s",n);
	
	if(n[0]>n[1]){
		no=1;
	}else if(n[0]==n[1]){
		if(n[2]<=n[1]){
			no=1;
		}else{
			no=2;
		}
	}else{
		no=2;
	}
	
	switch(no){
		case 1:
			printf("%c%c%c\n",n[0],n[0],n[0]);
			break;
		case 2:
			printf("%c%c%c\n",n[0]+1,n[0]+1,n[0]+1);
			break;
	}
	
	return 0;
} 