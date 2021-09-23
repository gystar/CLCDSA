#include <stdio.h>

int main(){
	int a,n,i,m;
	scanf("%d",&n);
	scanf("%d",&a);
	m = n/500;
	for (i=0;i<m;i++) {
		n = n - 500;
	}
	if (a >= n){
		printf("Yes");
	} else {
		printf("No");
	}
	return 0;
} 