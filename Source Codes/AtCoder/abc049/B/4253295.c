#include<stdio.h>
#include<string.h>

int main(){
	int H,W;
	char a[101][101];
	scanf("%d%d",&H,&W);
	getchar();
	for(int i=0;i<H;i++){
		scanf("%s",&a[i]);
		getchar();
	}
	for(int i=0;i<H;i++){
		printf("%s\n",a[i]);
		printf("%s\n",a[i]);
	}
} 