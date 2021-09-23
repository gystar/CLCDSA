#include<stdlib.h>
#include<limits.h>
#include<math.h>
#include<string.h>

int main(void){
	int k,n,i;
	int a[100000];

	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d\n",(n-k)/(k-1)+1+((n-k)%(k-1)!=0?1:0));
	
	return 0;
} 