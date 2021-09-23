#include <stdio.h>

int main(){
	int N, vas, vbs, Ls, i;
	double va, vb, L;
	scanf("%d%d%d%d", &N, &vas, &vbs, &Ls);
	va = (double)vas;
	vb = (double)vbs;
	L = (double)Ls;
	for(i = 0; i < N; i++){
		L *= vb / va; 
	}
	printf("%.12f\n", L);
	return 0;
} 