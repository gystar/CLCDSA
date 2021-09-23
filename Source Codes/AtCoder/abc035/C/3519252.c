#include <stdio.h>
int main(void){
	int n,q,i;
	scanf("%d %d",&n,&q);
	int l,r,s[200000]={0};
	for(i=0;i<q;i++){
		scanf("%d %d",&l,&r);
		s[l-1]++;
		s[r]--;
	}
	printf("%d",s[0]%2);
	for(i=1;i<n;i++){
		s[i]+=s[i-1];
		printf("%d",s[i]%2);
	}
	printf("\n");
	return 0;
} 