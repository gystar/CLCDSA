#include<stdio.h>
#include<math.h>

int main(void){
    int n,t,a,titen;
    int min=5000000;
    scanf("%d%d%d",&n,&t,&a);
    int h[n];
    for(int i=0;i<n;i++){
        scanf("%d",&h[i]);
    }
    for(int i=0;i<n;i++){
        int kion=1000*t-(6*h[i]+1000*a);
        if(fabs(kion)<min){
            titen=i+1;
            min=fabs(kion);
        }
    }
    printf("%d",titen);
    return 0;
} 