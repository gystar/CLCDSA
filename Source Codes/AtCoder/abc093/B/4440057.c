#include <stdio.h>

int main(void){
    
    int a,b,k;
    scanf("%d %d %d",&a,&b,&k);
    
    for(int i=0; i<k && a<b; i++){
        printf("%d\n",a);
        a++;
    }
    for(int i=b-k+1; i<=b; i++){
        if(i>=a)
            printf("%d\n",i);
    }
} 