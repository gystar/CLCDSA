#include <stdio.h>
int main(){
	int N,i,ans;
	scanf("%d",&N);
	ans = N;
	for(i=0;i<=N;i++){
		int cc=0;
		int t=i;
		while(t>0){
			cc+=t%6;
			t/=6;
		}
		t=N-i;
		while(t>0){
			cc+=t%9;
			t/=9;
		}
		if( ans>cc){
			ans = cc;
		}
	}
	printf("%d",ans);
	return 0;
} 