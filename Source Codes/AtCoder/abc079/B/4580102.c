#include <stdio.h>

int  main(void)
{
	int n;
	long l[100];
	
	scanf("%d",&n);
	
	for(int i=0;i<=n;i++){
		if(i==0){
			l[i]=2;
		}else if(i==1){
			l[i]=1;
		}else{
			l[i]=l[i-2]+l[i-1];
		}
	}
	
	printf("%ld\n",l[n]);
	
	return 0;
} 