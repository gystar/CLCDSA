#include <stdio.h>
int main(void){
    int a[]={0,1,3,1,2,1,2,1,1,2,1,2,1};
    int x,y;
    scanf("%d%d",&x,&y);
    if(a[x]==a[y]) printf("Yes");
    else printf("No");
    return 0;
} 