#include <stdio.h>
#include <string.h>

int main(void){
    int g=0,p=0;
    char s[100020];
    scanf("%s",s);
    for (int i=0; i<strlen(s); i++){
        if (s[i]=='g'){
            g++;
        } else if (s[i]=='p'){
            p++;
        }
    }
    if ((g+p)/2==p){
        printf("0\n");
    } else {
        printf("%d\n",(g+p)/2-p);
    }
	return 0 ;
} 