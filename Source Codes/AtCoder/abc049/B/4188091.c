#include<stdio.h>
int main(void){
    int h,w,i,j;
    char s[101][101];
    scanf("%d%d",&h,&w);
    for(i=0;i<h;i++){
        scanf("%s",s[i]);
    }
    for(i=0;i<h;i++){
        printf("%s\n%s\n",s[i],s[i]);
    }
    return 0;
} 