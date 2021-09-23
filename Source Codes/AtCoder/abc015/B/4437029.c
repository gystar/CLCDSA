#include <stdio.h>
#include <math.h>
int main(void){
	int n,n2=0,a,b=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(a!=0){
			b+=a;
			n2++;
		}
	}
	printf("%d\n",(int)ceil((float)b/n2));
	return 0;
} 