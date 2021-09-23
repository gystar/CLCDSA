#include<stdio.h>

int main(){
		int n,a[100],i,j;
		scanf("%d",&n);
		for(i=0;i<n;i++)scanf("%d",&a[i]);
		for(i=0;i<n;i++){
				for(j=0;j<n;j++){
						if(a[i]<a[j]){
								int tmp=a[i];
								a[i]=a[j];
								a[j]=tmp;
						}
				}
		}
		printf("%d",a[n-1]-a[0]);
		return 0;
} 