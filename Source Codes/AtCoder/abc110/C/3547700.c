#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(void){
	char s[200005],t[200005];
	scanf("%s",s);
	scanf("%s",t);
	int i,j,flag=0;
	int len=strlen(s);
	char R[26],Rd[26];
	rep(i,26){
		R[i]=-1;
		Rd[i]=-1;
	}
	for(i=0;i<len;i++){
		flag=0;
		if(R[s[i]-97]>=0){
			if(R[s[i]-97]!=t[i]){
				printf("No\n");
				return 0;
			}
		} 
		if(Rd[t[i]-97]>=0){
			if(Rd[t[i]-97]!=s[i]){
				printf("No\n");
				return 0;
			}
		}
		if(R[s[i]-97]<0) R[s[i]-97]=t[i];
		if(Rd[t[i]-97]<0) Rd[t[i]-97]=s[i];
	}


	printf("Yes\n");
	return 0;
} 