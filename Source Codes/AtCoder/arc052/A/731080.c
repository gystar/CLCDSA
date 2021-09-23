#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    char str[100];
    int i;
    int ans=0;
    
    scanf("%s", str);
    
    //0???9????10?????????????????????atoi????????
    for(i=0; i<10; i++){
        if(isdigit(str[i])){
            ans = atoi(&str[i]);
#ifdef DEBUG
            printf("%d\n", ans);
#endif
            break;
        }
    }
    
    printf("%d\n", ans);
} 