#include <stdio.h>

#define ARC(i, a, b) for(int i = (a); i < (b); ++i)
#define RC(i, n) ARC(i, 0, n)

int main(){
	unsigned n, a, p, ans = 0, cnt = 0;
	scanf("%u", &n);
	scanf("%u", &p);
	RC(i, n - 1){
		scanf("%u", &a);
		if(a == p) ++cnt;
		else{
			ans += (cnt + 1) / 2;
			cnt = 0;
		}
		p = a;
	}
	ans += (cnt + 1) / 2;
	printf("%d\n", ans);
} 