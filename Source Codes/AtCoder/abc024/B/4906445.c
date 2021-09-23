#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n,t,time=0,ans=0;
	scanf("%d%d",&n,&t);
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		if(time>a){
			ans += t-(time-a);
			time=a+t;
		}else{
			time = a+t;
			ans += t;
		}
	}
	printf("%d\n",ans);
	return 0;
} 