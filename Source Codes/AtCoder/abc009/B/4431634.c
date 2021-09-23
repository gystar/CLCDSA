#include <stdio.h>
int main(void){
	int i=0,n,a[100],max=0,second=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>=max) max=a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]!=max){
			if(max-second>max-a[i]) second=a[i];
		}
	}
	printf("%d\n",second);
	return 0;
} 