int main(void)
{
	int a;
	int sum=0;
	int ave = 0;
	int x = 10000;
	scanf("%d", &a);
	for (int i = 1;i < a+1;i++) {
		sum +=x*i;
	}
	ave = sum / a;
	printf("%d\n", ave);
	
	return 0;
     
} 