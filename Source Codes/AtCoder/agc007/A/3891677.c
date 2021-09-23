#include<stdio.h>
#include<string.h>
int main() {
	long long int h,w,result=0;
	char str[500][500];
	scanf("%lld%lld", &h,&w);
	
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			scanf(" %c", &str[i][j]);
		}
	}

	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			if (str[i][j] == '#') {

				result++;

			}
		}
	}
	if(result==h+w-1){ printf("Possible"); }else{ printf("Impossible"); }
	
} 