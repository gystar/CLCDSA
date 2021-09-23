#include <stdio.h>
int main(void){
    // Your code here!
    unsigned long a,b,n,t,sum=0;
    scanf("%lu%lu\n\n%lu\n",&n,&t,&a);
    for(int i=1;i<n;i++){ //A2-A1,,,An-An-1?n-1????
        scanf("%lu\n",&b);
        //printf("%lu,%lu\n",a,b);
        b-a<t? (sum=sum+b-a):(sum=sum+t); //A(i+1)-Ai?t?????????????
        //printf("%lu:%lu\n",i,sum);
        a=b; //A(i+1)?Ai???
    }
    sum=sum+t; //An?????t??
    printf("%lu\n",sum);
} 