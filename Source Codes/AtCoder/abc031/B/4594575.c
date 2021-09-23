#include <stdio.h>
int main(void){
    // Your code here!
    int l,h,n,x;
    scanf("%d%d%d",&l,&h,&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(l<=x && x<=h)
            printf("%d\n",0);
        else if(l>x)
            printf("%d\n",l-x);
        else
            printf("%d\n",-1);
    }
} 