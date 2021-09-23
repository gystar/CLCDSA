#include <stdio.h>
#include <string.h>
#include <math.h>
#include <memory.h>
#include <stdlib.h>


int main(void)
{	
	int L,R,i,j,sum=0;
	int l[100],r[100];
	scanf("%d %d",&L,&R);
	
	for(i=0;i<L;i++){
		scanf("%d",&l[i]);
	}
	for(i=0;i<R;i++){
		scanf("%d",&r[i]);
	}
	
	for(i=0;i<L;i++){
		for(j=0;j<R;j++){
			if(l[i]==r[j]){
				sum++;
				l[i]=0;
				r[j]=1000;
			}
		}
	}
	
	printf("%d\n",sum);
	return 0;
} 