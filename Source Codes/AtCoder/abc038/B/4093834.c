#include<stdio.h>

int main(){
	int h,w,h2,w2;
	scanf("%d%d%d%d",&h,&w,&h2,&w2);
	if(h==h2){
		puts("YES");
		return 0;
	}if(h==w2){
		puts("YES");
		return 0;
	}if(w==h2){
		puts("YES");
		return 0;
	}if(w==w2){
		puts("YES");
		return 0;
	}
	puts("NO");
	return 0;
} 