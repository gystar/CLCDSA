#include <stdio.h>
int main()
{   int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a%b==0&&c>0){
        printf("NO");
        return 0;
    }else if(a%b==0&&c==0){
        printf("YES");
        return 0;
    }
    for(int i=1;i<10000000;i++){
        if((a*i)%b==c){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
} 