#include<stdio.h>

int main(){
	int g=0,i,ans=0;
	char s[100000];
	scanf("%s",s);
	for(i=0;s[i]!=0;i++){
		if(s[i]=='g'){
			if(g>0){
				ans++;
				g--;
			}else g++;
		}
		if(s[i]=='p'){
			if(g>0)g--;
			else {
				ans--;
				g++;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
} 