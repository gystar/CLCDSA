#include <stdio.h>
int main(void){
    char a[2],b[2];
    scanf("%s%s",a,b);
    printf("%s\n",a[0]=='H'?(b[0]=='H'?"H":"D"):(b[0]=='H'?"D":"H"));
    return 0;
} 