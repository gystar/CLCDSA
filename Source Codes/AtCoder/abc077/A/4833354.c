#include<stdio.h>
int main(){
    char c1[3],c2[3];
    scanf("%s%s",c1,c2);
    if(c1[0]==c2[2]&&c1[2]==c2[0]&&c1[1]==c2[1])printf("YES\n");
    else printf("NO\n");

} 