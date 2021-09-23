#include <stdio.h>

int main(){
	int n, in, m1, m2;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &in);
		if(in > m1){
			m2 = m1;
			m1 = in;
		}
		if(m1 > in && in > m2){
			m2 = in;
		}
	}
	printf("%d\n", m2);
	return 0;
} 