#include <stdio.h>
#include <string.h>
int main(void){
    char s[99];
    scanf("%s",s);
    if (strcmp(s,"Sunday")==0){
        printf("0\n");
    }
    if (strcmp(s,"Monday")==0){
        printf("5\n");
    }
    if (strcmp(s,"Tuesday")==0){
        printf("4\n");
    }
    if (strcmp(s,"Wednesday")==0){
        printf("3\n");
    }
    if (strcmp(s,"Thursday")==0){
        printf("2\n");
    }
    if (strcmp(s,"Friday")==0){
        printf("1\n");
    }
    if (strcmp(s,"Saturday")==0){
        printf("0\n");
    }
    return 0;
} 