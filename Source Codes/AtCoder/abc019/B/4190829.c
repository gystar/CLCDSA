#include<stdio.h>
#include<string.h>

int main(){
    char s[1001];
    char tmp;
    unsigned int i,count=1;

    scanf("%s",&s);

    tmp = s[0];
    for(i=1;i<=strlen(s);i++){
        if(s[i]==tmp){
            count++;
        }else{  
            printf("%c%d",tmp,count);
            tmp = s[i];
            count = 1;
        }
    }
    printf("\n");
    return 0;
} 