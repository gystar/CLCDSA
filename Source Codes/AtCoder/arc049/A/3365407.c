#include <stdio.h>
#include <string.h>
int main(void){
    char s[120];
    int a,b,c,d;
    scanf("%s%d%d%d%d",s,&a,&b,&c,&d);
    for (int i=0; i<a; i++){
        printf("%c",s[i]);
    }
    printf("\"");
    for (int i=a; i<b; i++){
        printf("%c",s[i]);
    }
    printf("\"");
    for (int i=b; i<c; i++){
        printf("%c",s[i]);
    }
    printf("\"");
    for (int i=c; i<d; i++){
        printf("%c",s[i]);
    }
    printf("\"");
    for (int i=d; i<strlen(s); i++){
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
} 