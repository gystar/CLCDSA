#include<stdio.h>
int main(void){
	int K;
	scanf("%d",&K);
	int a;
	int e=0;
	int o=0;
	for(a=1;a<K+1;a++){
		if((a%2)==0){
			e++;
		}else{
			o++;
		}
	}
	printf("%d",(e*o));
return 0;
} 