#include <stdio.h>
int main(void){
	int n,i,max=0,sum=0,L;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&L);
		sum += L;
		if(L>max){
			sum += max;
			max = L;
			sum -= max;
		}
	}
	if(max < sum)printf("Yes");
	else printf("No");
	return 0;
} 