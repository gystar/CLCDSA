#include <stdio.h>
int main(void){
    int a,b,i;
    char s[12];
    scanf("%d%d%s",&a,&b,s);
    for(i=0;i<a+b+1;i++){
        if(i!=a){
            if(isdigit(s[i])==0){
                printf("No\n");
                return 0;
            }
        }
        else{
            if(s[i]!='-'){
                printf("No\n");
                return 0;
            }
        }
    }
    printf("Yes\n");
    return 0;
} 