#include <stdio.h>
 
int number[10];
 
int check(int num) {
	int i;
	
	while(num > 0) {
		if (number[num%10]) {
			return 0;
		}
		num /= 10;
	}
	
	return 1;
}
 
int main(void) {
	int n,k,d,i,ans;
 
	scanf("%d %d",&n,&k);
	
	for (i = 0;i < k;i++) {
		scanf("%d",&d);
		number[d] = 1;
	}
	
	ans = n;
	while(!check(ans)) {
		ans++;
	}
	printf("%d\n",ans);
	
	return 0;
} 