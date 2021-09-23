#include <stdio.h>
#include <math.h>
int main(void){
    int n,m,i,k=0;
    int s[100];
    scanf("%d",&n);
    do{
      m = abs(n)%2;
      s[k] = m;
      n = (n-m)/(-2);
      k++;
    }while(n!=0);
    for(i=k-1;i>=0;i--){
      printf("%d",s[i]);
    }
    return 0;
} 