#include <stdio.h>

int main(void)
{
	int n,a,i,ans=0;
	scanf("%d",&n);
	for (i=0;i<n;i++) {
		scanf("%d",&a);
		while (a%2==0){
			ans++;
			a = a/2;
		}

	}
	printf("%d\n",ans);
	
	return 0;
} 