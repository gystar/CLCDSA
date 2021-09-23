#include <stdio.h>

int main(){
    int n,m,X,Y;
    scanf("%d %d %d %d",&n,&m,&X,&Y);
    int x[n],y[n];
    int xmax=-1e9;
    int ymin=1e9;
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
        if(xmax<x[i]) xmax=x[i];
    }   
    for(int i=0;i<m;i++){
        scanf("%d",&y[i]);
        if(ymin>y[i]) ymin=y[i];
        if(ymin<=xmax){printf("War\n");return 0;}
    }   
    if(X<ymin&&ymin<=Y){
        printf("No War\n");
    }else{
        printf("War\n");
    }   
    return 0;
} 