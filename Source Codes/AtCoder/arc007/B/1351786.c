#include <stdio.h>

int main(){
    int N,M;
    scanf("%d %d",&N,&M);
    int CD[364];
    int haveCD=0;
    int kari=0;
    for(int i=0;i<N;i++)CD[i]=i+1;
    int task[364];
    for(int i=0;i<M;i++){
        scanf("%d",&task[i]);
        if(task[i]!=haveCD){
            for(int j=0;;j++){
                if(CD[j]==task[i]){
                    kari=haveCD;
                    haveCD=CD[j];
                    CD[j]=kari;
                    break;
                }
            }
        }
    }
    for(int i=0;i<N;i++)printf("%d\n",CD[i]);
    return 0;
} 