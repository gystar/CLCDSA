#include<stdio.h>
#include<math.h>
#include<string.h> 
int main() {
	int a,b,w;
	scanf("%d %d %d",&w,&a,&b);
	if(a>b){
		int temp=a;
		a=b;
		b=temp;
	}
	if(a+w<b){
		printf("%d",b-w-a);
	}else{
		printf("0");
	}
	return 0;
} 