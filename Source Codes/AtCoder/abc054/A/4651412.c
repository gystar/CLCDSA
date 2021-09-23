#include <stdio.h>
int main(void){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==1 || b==1){
        if(b!=1) printf("Alice\n");
        else if(a!=1) printf("Bob\n");
        else printf("Draw\n");
        return 0;
    }
    printf("%s\n",a>b?"Alice":(a<b?"Bob":"Draw"));
    return 0;
} 