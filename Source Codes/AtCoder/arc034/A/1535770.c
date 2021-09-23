#include<stdio.h>
int main(){
	double max=0,p;
	int n,a,b,c,d,e;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
		p=a+b+c+d+e*110.0/900;
		if(max<p)max=p;
	}
	printf("%f\n",max);
	return 0;
} 