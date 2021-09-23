#include <stdio.h>
int main(void){
    char n[2],a=0;
    scanf("%s",n);
    for(int i=0;i<=1;i++){
        if(n[i]=='9') {a=1;break;}
    }
    if(a==1) printf("Yes");
    else printf("No");
    return 0;
} 