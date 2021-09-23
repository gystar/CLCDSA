#include <stdio.h>
int main(){
    int h,w;
    scanf("%d%d", &h,&w);
    char pic[h+2][w+2],c;
    for (int i=1;i<h+1;i++){
        scanf("%c",&c);
        for (int j=1;j<w+1;j++){
            scanf("%c",&pic[i][j]);
        }
    }
    for (int i=0;i<h+2;i++){
        for (int j=0;j<w+2;j++){
            if (i==0 || i==h+1 || j==0 || j==w+1){
                pic[i][j]='#';
            }
            printf("%c",pic[i][j]);
        }
        printf("\n");
    }
    return 0;
} 