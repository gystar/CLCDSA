#include<stdio.h>

int main(){
		int n,i,a[101],ans=0,c=1;
		scanf("%d",&n);
		for(i=0;i<n;i++)scanf("%d",&a[i]);
		for(i=0;i<n-1;i++){
				if(a[i]==a[i+1])c++;
				else {
						ans+=c/2;
						c=1;
				}
		}
		ans+=c/2;
		printf("%d\n",ans);
		return 0;
} 