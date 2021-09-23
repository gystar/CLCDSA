#include <stdio.h>
int main(void){
    int N,M;
    scanf("%d %d",&N,&M);
    int flag=0;
    int a[200001]={};
    int kari1,kari2;
    for(int i=0;i<M;i++){
        scanf("%d %d",&kari1,&kari2);
        if(kari1==1)a[kari2]++;
        if(a[kari2]==2)flag=1;
        if(kari2==N)a[kari1]++;
        if(a[kari1]==2)flag=1;
    }
    if(flag==1)printf("POSSIBLE");
    else printf("IMPOSSIBLE");
} 