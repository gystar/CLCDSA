#include<stdio.h>
 
int main(){
        int n,a,b;
        scanf("%d %d %d", &n,&a,&b);
        int m = a<b ? b : a;
        int l = a<b ? a : b;
 
        if((m-l)%2==0) printf("Alice\n");
        else printf("Borys\n");
        return 0;
 
} 