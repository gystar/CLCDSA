#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int c;
    int sum;
    sum = 0;
    c = 0;
    for(int i = 0; i < n; i++){
        scanf("%d",a+i);
        sum += a[i];
        if(a[i] != 0){
            c++;
        }
    }
    if(sum % c == 0){
        printf("%d\n",sum/c);
    }
    else{
        printf("%d\n",(sum/c)+1);
    }
    return 0;
} 