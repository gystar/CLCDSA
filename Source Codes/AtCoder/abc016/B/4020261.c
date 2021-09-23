#include <stdio.h>

int main(){
    int a,b,c;
    int f1,f2;
    f1 = 0;
    f2 = 0;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b==c){
        f1 = 1;
        }
    if(a-b==c){
        f2 = 1;
    }
    if(f1 == 0&&f2 ==0){
        printf("!\n");
    }
    else if(f1 == 1&&f2 ==0){
        printf("+\n");
    }
    else if(f1 == 0&&f2 ==1){
        printf("-\n");
    }
    else{
        printf("?\n");
    }
    return 0;
} 