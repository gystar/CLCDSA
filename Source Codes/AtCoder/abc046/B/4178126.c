#include <stdio.h>
int Pow(int a,int b){
    int c=1,i=0;
    while(i<b)
    {
        c*=a;
        i++;
    }
    return c;
}
int Pow(int a,int b);
int main(void){
    unsigned int n=0,k=0;
    scanf("%d %d",&n,&k);
    unsigned int sum=0;
    sum=k*Pow((k-1),(n-1));
    printf("%d",sum);
    return 0;
} 