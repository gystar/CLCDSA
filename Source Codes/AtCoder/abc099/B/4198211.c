#include <stdio.h>
int f(int x){
    int n = 1;
    for(int i = 2;i <= x;i++)
        n += i;
    return n;
}
int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    int x = b-a;
    printf("%d",f(x)-b);
    return 0;
} 