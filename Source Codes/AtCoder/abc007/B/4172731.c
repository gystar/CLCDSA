#include<stdio.h>
#include<string.h>

int main(){
    char a[11];
    int len;
    char c;

    scanf("%s",a);
    len = strlen(a);
    if(a[1]=='\0'){
        if(a[0]=='a'){
            printf("-1\n");
        }else{ 
            c = a[0] - 0x01;
            printf("%c\n",c);
        }
    }else{ 
        a[len-1] = '\0';
        printf("%s\n",a); 
    }
    return 0;
} 