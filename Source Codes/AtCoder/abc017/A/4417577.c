#include <stdio.h>
int main(void){
    // Your code here!
    int n,m,g=0;
    for(int i=0;i<3;i++){
        scanf("%d%d",&n,&m);
        g += n*m/10;
    }
    printf("%d\n",g);
} 