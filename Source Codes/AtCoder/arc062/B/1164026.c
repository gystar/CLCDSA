#include <stdio.h>
#include <string.h>
char str[100001];
int main(void){
    int res=0;
    scanf("%s",str);
    int len = strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]=='p') res--;
    }
    printf("%d\n",res+len/2);
} 