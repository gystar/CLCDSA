#include<stdio.h>

int main(){
    int a,b;

    scanf("%d %d",&a,&b);

    if(a==b){
        printf("Draw");
    }else if(a==1 || b==1){
        if(a<b){
            printf("Alice");
        }else{printf("Bob");}
    }else if(a<b){
        printf("Bob");
    }else if(a>b){
        printf("Alice");
    }
    return 0;
} 