#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


int main(void){
    int n;
    scanf("%d",&n);
    int i,a[n],c = 0,cc = 1;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int now = a[0];
    for(i=1;i<n;i++){
        if(a[i] == now){
            cc++;
        }else{
            now = a[i];
            c += cc/2;
            cc = 1;
        }
    }
    c+=cc/2;
    printf("%d\n",c);
    return 0;
} 