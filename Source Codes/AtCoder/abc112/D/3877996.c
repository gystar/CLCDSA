int main() {
	int n, m;
	scanf("%lld%lld", &n, &m);
	for (int i = m/n; i >=1; i--) {
		if (m%i == 0) { printf("%lld", i); return 0; }
	}
} 