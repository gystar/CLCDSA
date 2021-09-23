#include<stdio.h>

int main(){
    int N,a,b,K,flag=0,i,j;
    int P[100];

    scanf("%d",&N);
    scanf("%d %d",&a,&b);
    scanf("%d",&K);
    for(i=1;i<=K;i++){
        scanf("%d",&P[i]);
    }
    P[0]=a; P[K+1]=b;
    for(i=0;i<K+2;i++){
        for(j=i+1;j<K+2;j++){
            if(P[i]==P[j]){
                flag = 1;
            }
        }
    }
    if(flag==0){
        printf("YES\n");
    }else{printf("NO\n");}
    return 0;
} 