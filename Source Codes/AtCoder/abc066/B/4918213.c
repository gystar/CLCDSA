#include <stdio.h>
#include <string.h>
int main(void){
	char s[201];
	scanf("%s",s);
	int i,j,k;
	int n = strlen(s);
	int ans = 0;
	int temp;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n-1;j++){
			if(s[i]==s[j]){
				temp = 2;
				for(k=1;k<j-i;k++){
					if( (j+k)>=n-1){
						break;
					}
					if(s[i+k]==s[j+k]){
						temp += 2;
					}else{
						temp = 0;
					}
				}
				if(temp == 2*(j-i)){
					if(ans<temp){
						ans = temp;
					}
				}
			}
		}
	}
	printf("%d",ans);
} 