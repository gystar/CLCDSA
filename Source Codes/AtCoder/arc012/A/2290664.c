#include <stdio.h>
#include <math.h>
#include <string.h>
char s[10];
int main(){
    scanf("%s",s);
    if(s[0]=='M')printf("5\n");
    if(s[0]=='T'&&s[1]=='u')
				 printf("4\n");
    if(s[0]=='W')printf("3\n");
    if(s[0]=='T'&&s[1]=='h')
				 printf("2\n");
    if(s[0]=='F')printf("1\n");
    if(s[0]=='S')printf("0\n");
    return 0;
} 