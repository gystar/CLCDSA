#include <stdio.h>
int main(void){
	char s[100001];
	int n,q;
	int ans[100001]={0};
	int ans2[100001];
	scanf("%d%d",&n,&q);
	scanf("%s",s);
	int i,j,l,r;
	//???AC????????????????????
	for(i=0;i<n;i++){
		ans[i+1] = ans[i];
		if(s[i]=='A'){
			if(s[i+1]=='C'){
				ans[i+1]++;
			}
		}
	}
	for(i=0;i<q;i++){
		scanf("%d%d",&l,&r);
		ans2[i] = ans[r-1]-ans[l-1];
	}
	for(i=0;i<q;i++){
		printf("%d\n",ans2[i]);
	}
	
	return 0;
} 