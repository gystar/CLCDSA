#include <stdio.h>
int main(void){
	int h,w,hh,ww;
	scanf("%d %d %d %d", &h,&w,&hh,&ww);
	if(h == hh || h == ww || w == hh || w == ww) puts("YES");
	else puts("NO");
	return 0;
} 