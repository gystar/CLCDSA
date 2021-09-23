int main(void){
	int i,x,y,tmp;
	int ans=1000000;

	scanf("%d", &i );
	for( x = 1; x <= sqrt(i) ; x++ ){
		y =  i / x ;
		tmp = y - x + i - (y * x);
		if (tmp < ans ){	
		ans = tmp;
		}
	}
	printf("%d\n", ans);
	return 0;
} 