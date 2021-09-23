#include<stdio.h>
int main(void){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    for(int i=0;i<100;i++)
    {
        if(c==(a*i)%b)
        {
            puts("YES");
            return 0;
        }
    }
    puts("NO");
    return 0;
} 