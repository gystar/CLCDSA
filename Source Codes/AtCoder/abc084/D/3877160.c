int main() {
	long long int n, m, sosu[200005] = {}, count[200005] = {}, L[200005],R[200005];
	scanf("%lld", &n);

	for (int i = 0; i < n; i++) {
		scanf("%lld%lld", &L[i], &R[i]);
	}

	for (int i = 2; i <= 100000; i++) {
		if (sosu[i] == 0) {
			for (int j = 2 * i; j <= 100000; j += i) {
				sosu[j] = -1;
			}
		}
	}

	for (int i = 2; i <= 100000; i++) {
		if (sosu[i] == 0&&sosu[(i+1)/2]==0&&i%2==1) {
			count[i] = count[i - 1] + 1;
         
		}else{
		count[i] = count[i - 1];
        }
	}
	for (int i = 0; i < n; i++) {
		printf("%lld\n",count[R[i]]-count[L[i]-1]);
	}
} 