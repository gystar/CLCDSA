#include <stdio.h>
int main(void){
    int N;
    scanf("%d",&N);
    int a;
    int dim;
    for(int i=2;i<=N;i++){
        int kari;
        printf("? %d %d\n",1,i);
        fflush(stdout);
        scanf("%d", &kari);
        if(i==2||dim<kari){dim=kari;a=i;}
    }
    for(int i=2;i<=N;i++){
        if(i!=a){
            int kari;
            printf("? %d %d\n",a,i);
            fflush(stdout);
            scanf("%d",&kari);
            if(kari>dim)dim=kari;
        }
    }
    printf("! %d\n",dim);
    return 0;
} 