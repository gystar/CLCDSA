#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n;
	int a[100];
	scanf("%d",&n);
	int i,sum;
	sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	int ans=0,ans2=0;
	for(i=0;i<n;i++){
		ans+=(sum/n-a[i])*(sum/n-a[i]);
		ans2+=(sum/n-a[i]+1)*(sum/n-a[i]+1);
	}
	if(ans<ans2){
		printf("%d\n",ans);
	}else{
		printf("%d\n",ans2);
	}
	return 0;
} 