#include <stdio.h>
#include <string.h>
int main(void){
    int N, i, j;
    scanf("%d",&N);
    int a = 2025 - N;
    for(i=1; i<10; i++){
        if(a%i == 0 && a/i<10){
            j = a/i;
            printf("%d x %d\n",i,j);
        }
    }
  return 0;  
} 