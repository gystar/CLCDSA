#include <stdio.h>
#include <stdlib.h>

int main(){
    int s;
    scanf("%d",&s);
    int a[1000000] = {s};
    int i, j, x=1;
    while(x){
        a[i+1] = a[i]%2==0 ? a[i]/2: 3*a[i]+1;
        for(j=0; j<i; j++){
            if(a[i] == a[j]){
                printf("%d\n",i+1);
                x = 0;
                break;
            }
        }
        i++;
    }
    return 0;
} 