#include <stdio.h>
int main(void){
    // Your code here!
    int n;
    scanf("%d",&n);
    if(n==100) printf("Perfect\n");
    else if(n>=90) printf("Great\n");
    else if(n>=60) printf("Good\n");
    else printf("Bad\n");
    
} 