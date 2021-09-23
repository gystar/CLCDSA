#include <stdio.h>
int main (void){
    int h,w;
    scanf("%d%d\n",&h,&w);
    int loop1,loop2;
    char temp;
    int count=0;
    for(loop1=0;loop1<h;loop1++){
        for(loop2=0;loop2<w;loop2++){
            scanf("%c",&temp);
            //printf("%c",temp);
            if(temp=='#')count++;
        }
        scanf("\n");
    }
    if(count==(h+w-1))printf("Possible\n");
    else printf("Impossible\n");
    //printf("%d",count);
    return 0;
} 