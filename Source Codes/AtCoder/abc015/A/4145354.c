#include<stdio.h>
#include<string.h>

int main(){
    char str_a[51];
    char str_b[51];
    int len_a,len_b;

    scanf("%s",str_a);
    scanf("%s",str_b);

    len_a = strlen(str_a);
    len_b = strlen(str_b);
    if(len_a<len_b){
        printf("%s\n",str_b);
    }else{  printf("%s\n",str_a);}
    return 0;
} 