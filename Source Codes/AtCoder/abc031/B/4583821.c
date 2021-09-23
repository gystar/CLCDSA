#include <stdio.h>
int main(void){
	int l,h,n,i,a;
	scanf("%d%d%d",&l,&h,&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(a>h)printf("-1\n");
		else if(l>a)printf("%d\n",l-a);
		else printf("0\n");
	}
	
	return 0;
} 