#include <stdio.h>
#include <stdlib.h>

int n;
int a[2][100];
int ans=0, ansmax=0;

int main(void){
	scanf("%d", &n);
	for(int i=0;i<n;i++)	scanf("%d", &a[0][i]);
	for(int i=0;i<n;i++)	scanf("%d", &a[1][i]);

	for(int i=0;i<n;i++){
		ans=0;
		for(int j=0;j<=i;j++)	ans += a[0][j];
		for(int j=i;j<n;j++)	ans += a[1][j];
		if(ans>ansmax)	ansmax=ans;
	}
	printf("%d", ansmax);
	return 0;
} 