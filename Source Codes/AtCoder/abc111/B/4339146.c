#include <stdio.h>

int main(void)
{
    int A,B,C;
    scanf("%d",&A);
    if (A%100 < (A/100)*10+A/100){
        printf("%d",(A/100)*100+(A/100)*10+A/100);
    } else if (A%100 == (A/100)*10+A/100)
    {
        printf("%d",A);
    } else
    {
        printf("%d",(A/100+1)*100+(A/100+1)*10+A/100+1);
    }
    
    

} 