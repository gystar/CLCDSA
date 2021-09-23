int main(void)
{
	double m = 0;
	double k = 0;
	double VV =0;
	scanf("%lf", &m);
	k = m / 1000;
	if (k < 0.1) {
		VV = 0;
		printf("%02.0f\n", VV);
	}
	if (k >= 0.1 && k <= 5) {
		VV = k * 10;
		printf("%02.0f\n", VV);
	}
	if (6 <= k && k <= 30) {
		VV = k + 50;
		printf("%2.0f\n", VV);
	}
	if (35 <= k && k <= 70) {
		VV = (k - 30) / 5 + 80;
		printf("%2.0f\n", VV);
	}
	if (70 < k) {
		VV = 89;
		printf("%2.0f\n", VV);
	}
	return 0;
} 