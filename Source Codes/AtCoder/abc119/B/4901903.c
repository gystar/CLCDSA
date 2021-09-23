#include <stdio.h>
#include <string.h>
int main(void){
	int N;
	int i,j;
	scanf("%d",&N);
	double ans = 0;
	char s[4];
	double temp;
	for(i=0;i<N;i++){
		scanf("%lf",&temp);
		scanf("%s",s);
		if(strcmp(s,"JPY")==0){
			ans +=temp;
		}else{
			ans +=temp * 380000;
		}
	}
	printf("%lf",ans);
	return 0;
} 