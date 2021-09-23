#include <stdio.h>

int main(){
	int n, a, b, x, p = 0;
	char dir[5];

	scanf("%d %d %d", &n, &a, &b);
	for(int i = 0; i < n; i++){
		scanf("%s", dir);
		scanf("%d", &x);
		if(x < a)x = a;
		if(b < x)x = b;
		if(dir[0] == 'E')
			p += x;
		else if(dir[0] == 'W')
			p -= x;
	}
	if(p < 0)
		printf("West %d\n", -p);
	else if(p > 0)
		printf("East %d\n", p);
	else
		printf("0\n");
	return 0;
} 