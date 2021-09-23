#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int i = 0, ans[100000] = {0};
	int in, size, count = 0;
	scanf("%d", &size);
	for (i; i < size; i++) {
		scanf("%d", &in);
		if (ans[in - 1] > 0) count++;
		ans[in - 1]++;
	}
	printf("%d\n", count);
	return 0;
} 