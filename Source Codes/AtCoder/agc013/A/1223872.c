#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int n;
	int a[100000];
	
	scanf("%d",&n);
	for (int i = 0;i < n;i++) {
		scanf("%d",&a[i]);
	}
	
	bool isUp;
	int p = 0,i = 0,cnt = 0;
	while(i < n) {
		cnt++;
		for (;i < n;i++) {
			if (a[p] != a[i]) {
				isUp = (a[p] < a[i]);
				break;
			}
		}
		for (;i < n-1;i++) {
			if (isUp && a[i] > a[i+1]) {
				p = i+1;
				break;
			} else if(!isUp && a[i] < a[i+1]) {
				p = i+1;
				break;
			}
		}
		i++;
	}
	printf("%d\n",cnt);
	
	return 0;
} 