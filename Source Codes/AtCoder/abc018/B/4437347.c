#include <stdio.h>
#include <string.h>
int main(void){
	char s[101],t[101],a[1];
	int n,l,r,i,j;
	scanf("%s",s);
	strcpy(t,s);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&l,&r);
		for(j=0;j<r-l+1;j++){
			s[l-1+j]=t[r-1-j];
		}
		strcpy(t,s);
	}
	printf("%s\n",s);
	return 0;
} 