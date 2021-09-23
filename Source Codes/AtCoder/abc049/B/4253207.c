#include<stdio.h>
int main() {
	int i,j,h,w;
	char a[101];
	scanf("%d%d",&h,&w);
	for(i=0; i<h; i++) {
		scanf("%s",a);
		for(j=0; j<2; j++) {
			printf("%s\n",a);
		}
	}
	return 0;
} 