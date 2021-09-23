#include <stdio.h>

int count(long in, long lim, int chk){
	int cnt = 0;
	if(in <= lim){
		if(chk == 7)
			cnt++;
		cnt += count(in * 10 + 3, lim, chk | 1)
			+ count(in * 10 + 5, lim, chk | 2)
			+ count(in * 10 + 7, lim, chk | 4);
		return cnt;
	}else
		return 0;
}

int main(void){
	long n;
	scanf("%ld", &n);
	printf("%d\n", count(0, n, 0));
	return 0;
} 