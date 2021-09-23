#include <stdio.h>
#include <string.h>

int main(void){
    int h,w;
    int i;
    char input[100][101];
    char img[200][101];
    scanf("%d %d",&h,&w);
    for(i=0;i<h;i++){
        scanf("%s",input[i]);
    }
    printf("\n");
    for(i=0;i<h;i++){
        strcpy(img[2 * i],input[i]);
        strcpy(img[2 * i + 1],input[i]);
    }
    for(i=0;i<2*h;i++){
        printf("%s",img[i]);
        printf("\n");
    }
    return 0;
} 