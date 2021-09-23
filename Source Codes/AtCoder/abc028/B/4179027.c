#include <string.h>
#include <stdio.h>
int main()
{   char s[101];
    scanf("%s",s);
    int u[6]={0};
    for(int i=0;i<strlen(s);i++){
        u[s[i]-'A']++;
    }
    for(int i=0;i<6;i++){
        printf("%d",u[i]);
        if(i==5){
            printf("\n");
        }else{
            printf(" ");
        }
    }
    return 0;
} 