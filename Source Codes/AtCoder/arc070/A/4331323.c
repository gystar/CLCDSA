#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
	int n;
	scanf("%d",&n);
	int l=0;
	for(int i=1;i<=n;i++){
		l+=i;
		if(l>=n){
			printf("%d",i);
			break;
		}
	}
	return 0;
} 