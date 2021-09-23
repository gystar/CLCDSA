#include <stdio.h>

int main(){
	char s[200001];
	scanf("%s",s);
	int sc=0,i,ans=0,l=0;
	while(s[l]!=0)l++;
	for(i=0;i<l;i++){
		if(s[i]=='S')sc++;
		if(s[i]=='T'){
			if(sc>0){
				sc--;
				ans++;
			}
		}
	}
	printf("%d\n",l-2*ans);
	return 0;
} 