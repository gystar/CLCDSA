#include <stdio.h>

int main(){
	int N, a, b, c, dis, dis1, dis2;
	scanf("%d", &N);
	for(a = 1, b = 1, c = 2, dis = 0; c <= N; c++){
		printf("? %d %d\n", a, c);
		fflush(stdout);
		scanf("%d", &dis1);
		printf("? %d %d\n", b, c);
		fflush(stdout);
		scanf("%d", &dis2);
		if(dis1 >= dis2 && dis1 > dis){
			b = c;
			dis = dis1;
		}
		else if(dis2 > dis1 && dis2 > dis){
			a = c;
			dis = dis2;
		}
	}
	printf("! %d\n", dis);
	return 0;
} 