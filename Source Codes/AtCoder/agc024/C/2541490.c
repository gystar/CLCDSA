#include <stdio.h>
 
int main(void){
    long n, count=-1, old=-1, new;
    scanf("%ld", &n);
    for(long i=0; i<n; i++){
        scanf("%ld", &new);
        long d = new-old;
        if(d>=2){
            puts("-1");
            return 0;
        }else if(d==1){
            count++;
        }else{
            count += new;
        }
        old = new;
    }
    printf("%ld\n", count);
    return 0;
} 