#include <stdio.h>
int main(void){
    char s[101][101];
    int h,w,i,j;
    scanf("%d%d",&h,&w);
    for(i=0;i<h;i++){
        scanf("%s",s[i]);
    }
    for(i=0;i<h+2;i++){
        if(i==0 || i==h+1){
            for(j=0;j<w+2;j++){
                printf("#");
            }
            printf("\n");
        }
        else printf("#%s#\n",s[i-1]);
    }
    return 0;
} 