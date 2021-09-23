#include<stdio.h>

int main(){
	long long a, b = 2;
	scanf("%d",&a);
	x:
	if(a % b != 0){
		b ++;
		if(b == a){
			printf("YES\n");
		}else{
			goto x;
		}
	}else{
		printf("NO\n");
	}
	return 0;
} 