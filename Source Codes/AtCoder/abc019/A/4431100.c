#include <stdio.h>
int main(void){
    // Your code here!
    int a[3],i,j;
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i]>a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    printf("%d\n",a[1]);
} 