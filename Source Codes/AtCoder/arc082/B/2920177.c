#include<stdio.h>
int main()
{
	int a[100005]={100005};
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	int sum=0; 
	for(int i=1;i<=n;i++){
		if(a[i]==i){
				int t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
				sum++;
		}
	}
	printf("%d\n",sum);
} 