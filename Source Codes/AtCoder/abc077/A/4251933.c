#include <stdio.h>

int main(void){
    char S1[4],S2[4];
    int i;
    scanf("%s",S1);
    scanf("%s",S2);
    for(i=0;i<3;i++){
        if(S1[i]!=S2[2-i]){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
} 