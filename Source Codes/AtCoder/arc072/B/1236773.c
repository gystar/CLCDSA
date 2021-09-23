#include<stdio.h>
long a[100000];

int main(int argc, char const *argv[]){
	long long x,y,p;
	scanf("%lld %lld\n",&x,&y);
	if(x>y){
		p=x-y;
	}else{
		p=y-x;
	}
	if(p>=2) printf("Alice\n");
	else printf("Brown\n");
	return 0;
} 