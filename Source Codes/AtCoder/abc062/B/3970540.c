#include <stdio.h>
int main(){
    int h,w;
    scanf("%d%d",&h,&w);
    char s[h][w+1];
    for(int i=0;i<h;i++){
        scanf("%s",s[i]);
    }
    for(int i=0;i<=w+1;i++){
    printf("#");
    }
    printf("\n");
    for(int i=0;i<h;i++){
        printf("#%s#\n",s[i]);
    }
    for(int i=0;i<=w+1;i++){
    printf("#");
    }
    return 0;
} 