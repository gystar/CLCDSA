#include <stdio.h>
int main(void){
    int n;
    int k;
    int i;
    scanf("%d",&n);
    n = n%30;
    int card[6] = {1,2,3,4,5,6};
    for(i=0;i<n;i++){
         k = card[i%5];
         card[i%5] = card[i%5+1];
         card[i%5+1] = k;
    }
    for(i=0;i<6;i++){
         printf("%d",card[i]);
    }
    
} 