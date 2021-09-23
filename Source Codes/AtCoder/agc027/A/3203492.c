#include <stdio.h>

int main(){
	int i,j,mem,n,x,count;
	
	scanf("%d %d",&n,&x);
	
	int ai[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&ai[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(ai[i] >ai[j]){
				mem = ai[i];
				ai[i] = ai[j];
				ai[j] = mem;
			}
		}
	}
	
	count=0;
	
	for(i=0;(x>0)&&(i<n);i++){
		x=x-ai[i];
		count++;
	}
	
	if(x!=0)	count--;
	
	printf("%d",count);
	return 0;
} 