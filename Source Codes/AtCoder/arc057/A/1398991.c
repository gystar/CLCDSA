#include <stdio.h>

int main(void){ 
        unsigned long int a,k,i;
        scanf("%ld", &a);
        scanf("%ld", &k);   


        if(k>0)
                while(a<2000000000000){
                        a += 1+k*a;
                        i++;
                } 
        else if(k==0)
                i = 2000000000000-a;

        printf("%ld\n", i); 
    
        return 0; 
} 