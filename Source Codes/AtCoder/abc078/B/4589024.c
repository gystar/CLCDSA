#include <stdio.h>

int  main(void)
{
	int x,y,z,ans;
	
	scanf("%d%d%d",&x,&y,&z);
	
	int i=0;
	
	for(int i=0;y*i+z*(i+1)<=x;i++){
		
		ans=i;
		
	}
	
	printf("%d\n",ans);
	
	return 0;
} 