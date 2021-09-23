#include<stdio.h>
#include<stdlib.h>

int getLength(char a[]);

int main(void){
    int i,len,sum=0;
    char num[15];
    gets(num);
    len=getLength(num);
    for(i=0;i<len;i++){
        sum+=num[i]-'0';    
    }
    if(atoi(num)%sum){
        puts("No");
        return 0;
    }else{
        puts("Yes");
        return 0;
    }
    
    return 0;
}
    
int getLength(char a[]){
    int i=0;
    while(a[i]){
        i++;
    }
    return i;
} 