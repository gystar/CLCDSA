#include <stdio.h>
int max(int x, int y){return x<y?y:x;}
int main(void){
	int a,ans=1;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		ans = max(ans,i*(a-i));
	}
	printf("%d\n",ans);
	return 0;
} 