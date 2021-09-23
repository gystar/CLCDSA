#include<stdio.h>
int h, w, i, j;
char s[52][53];


int main(){
	scanf("%d%d\n", &h, &w);
	for(i=1; i<=h; i++){
		gets(s[i]+1);
	}
	for(i=1; i<=h; i++){
		for(j=1; j<=w; j++){
			if(s[i][j] != '#'){
				s[i][j] = '0' + 
						(s[i-1][j-1]=='#') + (s[i-1][j]=='#') + (s[i-1][j+1]=='#') + (s[i][j-1]=='#') + 
						(s[i][j+1]=='#') + (s[i+1][j-1]=='#') + (s[i+1][j]=='#') + (s[i+1][j+1]=='#');
			}
		}
	}
	for(i=1; i<=h; i++){
		puts(s[i]+1);
	}
} 