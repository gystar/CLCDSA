#include<stdio.h>

int main(){
		int i,ans=0,j=0;char s[12][11];
		for(i=0;i<12;i++)scanf("%s",s[i]);
		for(i=0;i<12;i++){
				for(j=0;s[i][j]!=0;j++){
						if(s[i][j]=='r'){
								ans++;
								break;
						}
				}
		}
		printf("%d\n",ans);
		return 0;
} 