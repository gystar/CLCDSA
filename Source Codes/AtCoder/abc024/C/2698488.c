#include <stdio.h>

int main(void){
	int n, d, p;
	scanf("%d%d%d", &n, &d, &p);
	int dl[10005], dr[10005], l[105], r[105];
	for(int i=0; i<d; i++){
		scanf("%d%d", &dl[i], &dr[i]);
	}
	for(int i=0; i<p; i++){
		scanf("%d%d", &l[i], &r[i]);
	}
	int now;
	for(int i=0; i<p; i++){
		if(l[i] > r[i]){
			now = l[i];
			for(int j=0; j<d; j++){
				if(now <= dr[j] && now >= dl[j]){
					now = dl[j];
				}
				if(now <= r[i]){
					printf("%d\n", j+1);
					break;
				}
			}
		}
		if(l[i] < r[i]){
			now = l[i];
			for(int j=0; j<d; j++){
				if(now <= dr[j] && now >= dl[j]){
					now = dr[j];
				}
				if(now >= r[i]){
					printf("%d\n", j+1);
					break;
				}
			}
		}
	}
	return 0;
} 