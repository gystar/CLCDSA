#include <stdio.h>
int main(void){
    // Your code here!
    char a[6] = {'A','B','C','D','E'};
    char s;
    int i;
    scanf("%c",&s);
    for(i=0;a[i]!='\0';i++){
        if(s==a[i])
            break;
    }
    printf("%d\n",i+1);
    
} 