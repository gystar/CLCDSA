#include <stdio.h>
#include <string.h>
int main(void){
    int ns=0,we=0;
    char s[1001];
    scanf("%s",&s);
    if(strchr(s,'N')) ns++;
    if(strchr(s,'S')) ns--;
    if(strchr(s,'W')) we++;
    if(strchr(s,'E')) we--;
    printf("%s\n",ns==0 && we==0?"Yes":"No");
    return 0;
} 