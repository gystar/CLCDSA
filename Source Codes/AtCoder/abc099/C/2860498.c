#include <stdio.h>
int main(void){
	int n;
	scanf("%d",&n);
	int i;
	int min = n;
	for(i=0;i<=n;i++){
		int cc = 0;
		int t=i;
		while( t>0){
			cc += t%6;
			t /=6;
		}
		t = n-i;
		while(t>0){
			cc += t%9;
			t/=9;
		}
		if( cc < min){
			min = cc;
		}	
	}
	printf("%d",min);
	return 0;
} 