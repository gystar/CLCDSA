#include <stdio.h>

int main(void) {
	int a[6]={1,2,3,4,5,6};
	int n;
	int tmp;
	scanf("%d",&n);
	n%=30;
	for (int i=0;i<n;i++){
		tmp=a[i%5];
		a[i%5]=a[(i%5)+1];
		a[(i%5)+1]=tmp;
	}
	for (int i=0;i<6;i++)printf("%d",a[i]);
	return 0;
		} 