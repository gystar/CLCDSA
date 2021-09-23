#include <stdio.h>
int main(void){
    int n,m,X,Y,x,y,xmax=-101,ymin=101,i,j;
    scanf("%d%d%d%d",&n,&m,&X,&Y);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x>xmax) xmax=x;
    }
    for(j=0;j<m;j++){
        scanf("%d",&y);
        if(y<ymin) ymin=y;
    }
    if(X<Y && xmax<Y && X<ymin && xmax<ymin) printf("No War\n");
    else printf("War\n");
    return 0;
} 