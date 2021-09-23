int main(void)
{
	int n;
	int wa=0;

	scanf("%d",&n);

	for (int i = 1; i <= n; i++) {

		wa += i;
	}
	
	printf("%d", wa*10000/n);
} 