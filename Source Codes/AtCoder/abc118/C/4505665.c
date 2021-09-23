#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int GCD(int x,int y){return y==0? x:GCD(y,x%y);}
int main(void){
	int n,i,ans;
	scanf("%d",&n);
	int A,B;
	scanf("%d",&ans);
	for(i=1;i<n;i++){
		scanf("%d",&B);
		ans = GCD(ans,B);
		A = B;
	}
	printf("%d",ans);
	return 0;
} 