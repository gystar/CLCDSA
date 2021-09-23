#include<stdio.h>

int main(){
		int n,q,l,r,t,i,a[100]={0},j;
		scanf("%d%d",&n,&q);
		for(i=0;i<q;i++){
				scanf("%d%d%d",&l,&r,&t);
				for(j=l-1;j<=r-1;j++){
						a[j]=t;
				}
		}
		for(i=0;i<n;i++)printf("%d\n",a[i]);
		return 0;
} 