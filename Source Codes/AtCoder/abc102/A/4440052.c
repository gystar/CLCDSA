#include <stdio.h>

int main(){
    
    int a;
    scanf("%d",&a);
    if(a%2 == 0){
        printf("%d\n",a);
    }else{
        printf("%d\n",a*2);
    }
    return 0;
} 