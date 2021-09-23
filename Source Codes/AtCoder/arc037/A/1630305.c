#include<stdio.h>
int main(){
	int n,a,s=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		if(80>a)s+=80-a;
	}
	printf("%d\n",s);
	return 0;
} 