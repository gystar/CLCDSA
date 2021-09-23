#include <stdio.h>
#define Min(a,b) a<b?a:b
int main(void){
    int n;
    scanf("%d",&n);
    
    if(n==1)
    {
        puts("0");
        return 0;
    }
    int min = n;
    int i=1;
    while(i<n)
    {
        min = Min(min,n%i+abs(i-n/i)); 
        // printf("%d %d %d\n",min,n,i);
        i++;
    }
    printf("%d\n",min);
    return 0;
} 