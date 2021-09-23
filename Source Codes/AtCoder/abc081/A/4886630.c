#include<stdio.h>

int main(void) {
	int cnt=0;
	char c;
	for(int i=0;i<3;i++) {
		scanf("%c",&c);
		if(c=='1')
			cnt++;
	}
	printf("%d",cnt);
} 