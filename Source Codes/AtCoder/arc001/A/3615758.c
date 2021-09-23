#include <stdio.h>

int main ()
{
	int N, i, one = 0, two = 0, three = 0, four = 0;
	
	scanf("%d", &N);
	
	char c[N + 1];
	
	scanf("%s", c);
		
	c[N + 1] = "\0";
	
	for (i = 0; i < N; i++) {
		if (c[i] == '1') {
			one += 1;
		} else if (c[i] == '2') {
			two += 1;
		} else if (c[i] == '3') {
			three += 1;
		} else if (c[i] == '4') {
			four += 1;
		}
	}
	
	printf("%d %d\n", four_max(one, two, three, four),
					  four_min(one, two, three, four));
					  
	
	return 0;
}

int four_max(int a, int b, int c, int d)
{
	int max = a;
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	if (max < d) {
		max = d;
	}
	
	return max;
}

int four_min(int a, int b, int c, int d)
{
	int min = a;
	if (min > b) {
		min = b;
	} 
	if (min > c) {
		min = c;
	}
	if (min > d) {
		min = d;
	}
	
	return min;
} 