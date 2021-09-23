#include <stdio.h>
int main(void){
    // Your code here!
    int n,m,s=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        while(m%3==2 || m%2==0){
            m--;
            s++;
        }
    }
    printf("%d\n",s);
} 