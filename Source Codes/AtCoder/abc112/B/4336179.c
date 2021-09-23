#include<stdio.h>

int main(void)
{
	int N,T,c,t,i,ansCost=1000,flag=0;
	
	scanf("%d %d",&N,&T);

	for(i=0;i<N;i++){		
		scanf("%d %d",&c,&t);
		
		if(t<=T){
			if(c<ansCost) ansCost=c;
		}else{
			flag++;
		}
	}
	if(flag!=i)printf("%d",ansCost);
	else printf("TLE");

	return 0;
} 