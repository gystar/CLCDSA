#include <stdio.h>
int main(void)
{
    int pap,day,up,hog;
    scanf("%d %d %d %d",&pap,&day,&up,&hog);
    int c[105]={};
    for(int p=0;p<day;p++)
    {
        scanf("%d\n",&c[p]);
        if(pap<=up)pap+=hog;
        pap-=c[p];
        if(pap<0)
        {
            printf("%d\n",p+1);
            return 0;
        }
    }
    printf("complete\n");
    return 0;
} 