#include<stdio.h>
int main(){
    int a,sum = 0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        sum += i*10000;
    }
    printf("%d\n",sum/a);
    return 0;
} 