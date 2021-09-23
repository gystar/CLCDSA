#include<stdio.h>

int main(){
	int n,i;
	long a[100000];
	int yo=0,ni=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%ld",&a[i]);
		if(a[i]%2==0&&a[i]%4!=0)ni++;
		if(a[i]%4==0)yo++;
	}
	if(n/2<=yo){
		puts("Yes");
	}else{
		if(ni>=2){
			if((n-ni)%2==0){
				if((n-ni)/2<=yo)puts("Yes");
				else puts("No");
			}else {
				puts("No");
			}
		}else puts("No");
	}
	return 0;
} 