#include <stdio.h>

int main(void)

{
	int n;
	char r[110];
	double sum=0.0;
	
	scanf("%d%s",&n,r);
	
	int i=0;
	
	while(i<n){
		if(r[i]=='A'){
			sum=sum+4.0;
		}else if(r[i]=='B'){
			sum=sum+3.0;
		}else if(r[i]=='C'){
			sum=sum+2.0;
		}else if(r[i]=='D'){
			sum=sum+1.0;
		}
		
		i++;
	}
	
	printf("%.14f\n",sum/(double)n);
	
	return 0;
	
} 