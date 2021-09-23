#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<9; i++){
        if(111*i < n && n <= 111*(i+1)){
            printf("%d\n",(i+1)*111);
            break;
        }
    }
    return 0;
} 