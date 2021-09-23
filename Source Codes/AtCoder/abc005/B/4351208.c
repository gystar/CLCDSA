#include <stdio.h>
#include <math.h>
int main(void){
    // Your code here!
    int n,x,g = 101;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        g = fmin(x,g);
    }
    printf("%d\n",g);
} 