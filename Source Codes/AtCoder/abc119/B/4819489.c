#include<stdio.h>
int main(void){
	int N;
	double x;
	char u[3];
	scanf("%d",&N);
	int a;
	double sum=0;
	for(a=0;a<N;a++){
		scanf("%lf %s",&x,u);
		if(u[0]=='J'){
			sum+=x;
		}else{
			sum+=(x*380000.0);
		}
	}
	printf("%.8f",sum);
return 0;
} 