#include<stdio.h>
#include<string.h>

int main(){
	char s[1000];
	int n;
	scanf("%d",&n);
	getchar();
	int x=0;
	int max=0;
	scanf("%s",&s);
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='I'){
			x++;
			if(x>max){
				max=x;
			}
		}
		if(s[i]=='D'){
			x--;
		}
	}
	printf("%d",max);
} 