#include <stdio.h>

int main(){
	int a,b,i;
	double sum;
	for(i=0;i<3;i++){
		scanf("%d %d\n",&a,&b);
		sum += a*b*0.1;
	}
	
	printf("%.0f\n",sum);

  return 0;
} 