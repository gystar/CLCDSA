#include <stdio.h>
#include <stdlib.h>
int min(int x, int y){return x<y?x:y;}
int main(void){
	int n,ans,h,w;
	scanf("%d",&n);
	ans=n;
	for(h=1;h<=(n+1);h++){
		w = n/h;
		ans=min(abs(h-w)+n-h*w,ans);
	}
	
	printf("%d",ans);
	
	return 0;
} 