#include <stdio.h>

int main(void)
{
	int n,T,c[100],t[100];
	int min=10000;
	
	scanf("%d%d",&n,&T);
	
	int i=0;
	
	while(i<n){
		
 		scanf("%d%d",&(c[i]),&(t[i]));
		
		if(t[i]>T){
			c[i]=c[i]+20000;
		}
		
		if(min>c[i]){
			min=c[i];
		}
		
		i++;
	}
	
	if(min==10000){
		printf("TLE\n");
	}else{
		printf("%d\n",min);
	}
	return 0;
} 