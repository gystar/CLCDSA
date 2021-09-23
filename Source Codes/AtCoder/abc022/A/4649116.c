#include <stdio.h>
int main(void){
    int n,s,t,w,a,i,c=0;
    scanf("%d%d%d%d",&n,&s,&t,&w);
    if(w>=s && w<=t) c++;
    for(i=1;i<n;i++){
        scanf("%d",&a);
        if(w+a>=s && w+a<=t) c++;
        w+=a;
    }
    printf("%d\n",c);
    return 0;
} 