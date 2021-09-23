#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//standard
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))
#define abs(a) ((a)>(0)?(a):-(a))

int main() {
    long n,pre = 0,ans = 0;
    long array[10000];

    //input
    scanf("%ld",&n);

    for(int i = 0; i < n; i++){
        scanf("%ld",&array[i]);
        ans += array[i] > pre ? array[i] - pre : 0;
        pre = array[i];
    }
    //calculation
    //quicksort(array, 0, n-1);

    //Output
    printf("%ld\n",ans);


    return 0;
} 