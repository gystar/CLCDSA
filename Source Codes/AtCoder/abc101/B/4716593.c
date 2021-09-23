#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void){
    int i,sn=0;
    char n[11];
    scanf("%s",n);
    for(i=0;i<strlen(n);i++){
        sn+=n[i]-0x30;
    }
    printf("%s\n",atoi(n)%sn==0?"Yes":"No");
    return 0;
} 