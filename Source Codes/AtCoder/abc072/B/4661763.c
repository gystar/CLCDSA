#include <stdio.h>
#include <string.h>
int main(void){
    char s[100001];
    int i;
    scanf("%s",s);
    for(i=0;i<strlen(s);i++){
        if(i%2==0) printf("%c",s[i]);
    }
    printf("\n");
    return 0;
} 