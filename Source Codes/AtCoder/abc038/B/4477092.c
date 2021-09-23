#include<stdio.h>//atcoder038B
int main(void)
{
	int h1,h2,w1,w2;
	scanf("%d %d %d %d",&h1,&w1,&h2,&w2);
	if(h1==h2 || w1==w2 || h1==w2 || h2==w1){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
} 