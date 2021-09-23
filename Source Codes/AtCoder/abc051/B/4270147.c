#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
	int x,y,z;
	int k,s;
	scanf("%d %d",&k,&s);
	int sum=0;
	for(x=0; x<=k; x++) {
		for(y=0; y<=k; y++) {
			if((s-x-y)<=k&&(s-x-y)>=0) {
				sum++;
			}
		}
	}
	printf("%d",sum);
	return 0;
} 