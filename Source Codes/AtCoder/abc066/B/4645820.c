#include <stdio.h>
#include <string.h>
int main(void){
    char str[201];
    int n,i;
    scanf("%s",str);
    n=strlen(str);
    for(i=n-2;i;i-=2){
        if(strncmp(str,str+i/2,i/2)==0){
            printf("%d\n",i);
            return 0;
        }
    }
    return 0;
} 