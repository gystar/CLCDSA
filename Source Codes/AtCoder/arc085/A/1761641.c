#include <stdio.h>
void solve(void)
{
	int n,m,x;
	scanf("%d %d", &n,&m);
	x = 1800*m + 100*n;
	while(m-->0) x *= 2;
	
	printf("%d\n", x);
}
int main(int argc, char **argv)
{
	solve();
	return 0;
} 