#include<stdio.h>


 long long calc(long long a) {
	 if (a % 4 == 0)return a;
	 if (a % 4 == 1)return 1;
	 if (a % 4 == 2)return a + 1;
	 if (a % 4 == 3)return 0;
	 return 0;
}
int main() {

	long long a, b;

	scanf("%lld%lld", &a, &b);
	printf("%lld", calc(a-1) ^ calc(b));
	


	return 0;
} 