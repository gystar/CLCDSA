#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n, q, l, r, count = 0, flag;
	char *str;
	int *map;
	scanf("%d %d", &n, &q);
	str = malloc(sizeof(char) * (n + 1));
	map = malloc(sizeof(int) * n);
	scanf("%s", str);
	for(int i = 0; i < n; i++){
		if(flag == 1 && str[i] == 'C'){
			count++;
			flag = 0;
		}else if(str[i] == 'A'){
			flag = 1;
		}else{
			flag = 0;
		}
		map[i] = count;
	}
	for(int i = 0; i < q; i++){
		scanf("%d %d", &l, &r);
		printf("%d\n", map[r - 1] - map[l - 1]);
	}
	return 0;
} 