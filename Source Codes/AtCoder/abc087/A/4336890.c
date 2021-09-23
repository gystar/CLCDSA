#include <stdio.h>

int main(void)
{
	int x,a,b,sum,remaining,change;
	scanf("%d\n%d\n%d",&x,&a,&b);
	
	remaining=x-a;
	
	if(remaining%b==0){
		sum=remaining/b;
	}else{
		while(remaining%b!=0){
			remaining--;
		}
		sum=remaining/b;
	}
	
	change=x-a-(b*sum);
	
	printf("%d\n",change);
	
	return 0;
} 