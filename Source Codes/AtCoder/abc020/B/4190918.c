#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char a[8],b[4];
    int num;

    scanf("%s %s",&a,&b);

    num = atoi(strcat(a,b));
    printf("%d\n",num*2);
    return 0;
} 