#include <stdio.h>

int main(void) {
	int n,t[100],min;
	scanf ("%d",&n);
	for (int i; i<n ; i++){
		scanf("%d",&t[i]);
	}
	min=t[0];
	for (int i; i<n ; i++){
		if (min>t[i])min=t[i];
	}
	printf("%d\n",min);
	return 0;
		} 