#include<stdio.h>
int MAX(int a,int b){return a<b?b:a;}
int main(){
	int n,i,b=0,max=0,d[300010];
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&d[i]);
	for(i=1;i<n-1;i++){
		if(d[i]<d[i-1]&&d[i]<d[i+1]){
			max=MAX(max,i-b);
			b=i;//printf("%d %d\n",i,b);
		}
	}
	if(n==1)i=0;
	printf("%d\n",MAX(max,i-b)+1);
	return 0;
} 