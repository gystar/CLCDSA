#include<stdio.h>
int N, A, B, D, now, i;
char S;
int main(){
	scanf("%d %d %d\n", &N, &A, &B);
	for(i=0; i<N; i++){
		S=getchar(); getchar(); getchar(); getchar();
		scanf("%d\n", &D);
		if(D<A){D=A;}
		else if(D>B){D=B;}
		now += S=='E'?D:-D;
	}
	if(now==0){
		printf("0\n");
	}else if(now > 0){
		printf("East %d\n", now);
	}else{
		printf("West %d\n", -now);
	}
} 