#include <stdio.h>
#include <string.h>
int main(void){
	char s[11];
	scanf("%s",s);
	int ans = 0;
	int i;
	int max = 0;
	int n = strlen(s);
	for(i=0;i<n;i++){
		ans = 0;
		while(s[i]=='A'||s[i]=='C'||s[i]=='G'|| s[i]=='T'){
			ans ++;
			i++;
		}
		if(max<ans)max=ans;
	}
	printf("%d",max);
	return 0;
} 