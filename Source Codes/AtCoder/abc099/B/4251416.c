#include <stdio.h>

int main(){
	int a,b;
	int i;
	int ans=0;
	
	scanf("%d %d",&a,&b);
	
	for(i=1;i<b-a;i++){
		ans+=i;
	}
	
	ans-=a;
	
	printf("%d",ans);
	
	return 0;
} 