#include<stdio.h>
#include<math.h>
//using namespace std;
int main()
{
    int x,a,b;
     scanf("%d%d%d",&x,&a,&b);
    if(abs(a-x)<abs(b-x))
        printf("A");
    else
        printf("B");
    return 0;
} 