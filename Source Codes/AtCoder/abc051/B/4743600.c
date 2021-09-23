#include<stdio.h>
int main(){
	
	int K,S,X,Y,Z,count=0;
	scanf("%d%d",&K,&S);
	
	for(Z=0;Z<=K;Z++){
		
		for(Y=0;Y<=K&&Y<=S-Z;Y++){
		
		
			if(0<=S-Z-Y&&S-Z-Y<=K){
		count++;
			}
		
		}
	}
	
	printf("\n%d\n\n",count);
	
	return 0;
} 