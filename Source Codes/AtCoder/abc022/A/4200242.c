#include<stdio.h>

int main(){
    int n,s,t,w=0,count=0,i;
    int a[1000];

    scanf("%d %d %d",&n,&s,&t);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        w += a[i];
        if(w>=s && w<=t){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
} 