#include<stdio.h>

int main(){
	int n,i,j,a[1000],ans=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]>a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	for(i=0;i<n;i+=2)ans+=a[i];
	printf("%d\n",ans);
	return 0;
} 