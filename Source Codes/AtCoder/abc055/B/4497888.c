#include <stdio.h>

int main(void){

	long long int N;
	scanf("%lld", &N);

	long long int i, mod = 0;
	long long int ans = 1;

	
	for(i = 0; i < N; i++){
		
		mod = ans % 1000000007;
		ans = mod * ((i + 1) % 1000000007);
		
		while(ans >= 1000000007){
			ans = ans % 1000000007;

			if(ans < 1000000007){
				break;
			}
		}
	}	

	printf("%lld\n", ans);
	return 0;

} 