#include <stdio.h>

int main(void)
{
    char des[200001];
    scanf("%s",des);
    int i;
    
    long long int sum=0;
    long long int bnum=0;
    
    for(i=0; des[i]!='\0'; i++){
        if(des[i] == 'B'){
            bnum++;
        }
        else{
            sum += bnum;
        }
    }
    printf("%lld\n",sum);
    
    return 0;
} 