#include <stdio.h>
int main(void){
    int i,j,a,z;
    char s[200000];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='A') {a=i;break;}
    }
    for(j=i+1;s[j]!='\0';j++){
        if(s[j]=='Z') z=j;
    }
    printf("%d",z-a+1);
    return 0;
} 