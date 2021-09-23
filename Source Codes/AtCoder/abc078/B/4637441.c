#include<stdio.h>

int main(){
    int num=1;
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    while(1){
        if(y*num+z*(num+1) > x) break;
        else num++;
    }
    printf("%d",num-1);
  return 0;
} 