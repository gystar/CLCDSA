#include<stdio.h>
#include<string.h>

int main(void)
{
    char s[101];
    int n[4],i,j;
    scanf("%s",s);
    for(i=0;i<4;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<strlen(s);i++){
        for(j=0;j<4;j++){
            if(i==n[j]){
                printf("\"");
            }
        }
        printf("%c",s[i]);
    }
    if(i==n[3]){
        printf("\"");
    }
    printf("\n");
    return 0;
} 