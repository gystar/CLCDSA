#include<stdio.h>

#define N 100001

int main(){
	int n,m,i,f[N]={0},a[N];
	scanf("%d%d",&n,&m);
	for(i=0;i<m;i++)scanf("%d",&a[i]);
	for(i=m-1;i>=0;i--){
		if(f[a[i]]==0){
			printf("%d\n",a[i]);
			f[a[i]]++;
		}
	}
	for(i=1;i<=n;i++){
		if(f[i]==0)printf("%d\n",i);
	}
	return 0;
} 