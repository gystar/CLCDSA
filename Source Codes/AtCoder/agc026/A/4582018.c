#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n,ans=0,i,a,b;
	scanf("%d",&n);
	scanf("%d",&b);
	for(i=1;i<n;i++){
		scanf("%d",&a);
		if(b==a){
			ans++;
			b = 0;
		}else	b = a;
	}
	printf("%d",ans);
	return 0;
} 