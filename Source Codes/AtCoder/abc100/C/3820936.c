#include<stdio.h>

int main(){
	int N,ans=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		int a;
		scanf("%d",&a);
		while(a%2==0){
			ans++;
			a/=2;
		}
	}
	printf("%d\n",ans);
	return 0;
} 