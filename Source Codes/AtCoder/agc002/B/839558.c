#include<stdbool.h>

bool flag[100005];

int main(){
	long n, m, x, y, i;
	long nbox[100005] = {0};
	scanf("%ld%ld", &n, &m);
	for(i = 0; i < n; i++) nbox[i] = 1;	
	
	flag[0] = 1;
	for(i = 0 ; i < m; i++){
		scanf("%ld%ld", &x, &y);
		if(nbox[x-1] >= 1){
			nbox[x-1]--;
			nbox[y-1]++;
			
			if(flag[x-1] == 1 && flag[y-1] == 0)
				flag[y-1] = 1;
			if(nbox[x-1] == 0) 
				flag[x-1] = 0;
		}
	}
	long tbox = 0;
	for(i = 0; i < n; i++) if(flag[i] == 1) tbox++;
	printf("%ld\n", tbox);	
	return 0;
} 