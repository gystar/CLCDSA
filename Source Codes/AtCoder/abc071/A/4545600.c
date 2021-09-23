#include<stdio.h>
#include<math.h>
int main(){
    int x,a,b;
    scanf("%d %d %d",&x,&a,&b);
    if(abs(x-a)<abs(x-b)){
        printf("A\n");
    }
    else{
        printf("B\n");
    }
    return 0;
} 