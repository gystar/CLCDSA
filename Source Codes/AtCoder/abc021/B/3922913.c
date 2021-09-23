#include <stdio.h>

int main(){
	int k, n, pass[105];
	int in, f = 1;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		pass[i] = 0;
	scanf("%d", &in);
	pass[in - 1] = 1;
	scanf("%d", &in);
	pass[in - 1] = 1;

	scanf("%d", &k);
	for(int i = 0; i < k; i++){
		scanf("%d", &in);
		if(pass[in - 1] == 1)
			f = 0;
		pass[in - 1] = 1;
	}
	if(f)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
} 