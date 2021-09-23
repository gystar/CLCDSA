#include <stdio.h>
#define swap(X, Y) {ll tmp = (X); (X) = (Y); (Y) = tmp;}
typedef long long ll;

ll n;
ll a, b;

ll gcd(ll a, ll b);

int main()
{
	ll gcd_;
	scanf("%lld", &n);
	scanf("%lld %lld", &a, &b);
	gcd_ = gcd(a, b);

	for (int i = 2; i < n; i++) {
		scanf("%lld", &a);
		gcd_ = gcd(gcd_, a);
	}
	
	printf("%lld\n", gcd_);

	return 0;
}

ll gcd(ll a, ll b)
{
	if (b > a) {
		swap(a, b);
	}

	while (b) {
		ll r = a % b;
		a = b;
		b = r;
	}

	return a;
} 