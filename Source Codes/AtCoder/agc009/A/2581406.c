#include <stdio.h>

int main() {
    int n;
    long int keep = 0;
    int a[100000]; // less than O(n)
    int b[100000];
    
    //input
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    
    //calculation
    for(int i = n-1; i >= 0; i--){
        keep += (b[i]-(a[i]+keep)%b[i])%b[i];
    }
    
    //Output
    printf("\n%ld\n",keep);
    return 0;
} 