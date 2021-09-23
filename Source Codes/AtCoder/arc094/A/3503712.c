#include<stdio.h>
int cmpfunc(const void *a,const void *b)
{
    return (*(int *)a-*(int *)b);
}
int main()
{
    int t,a,b,c,i,sum;
    int num[3];
    //scanf("%d",&t);
    t=1;
    while(t--){
        for(i=0;i<3;i++){
            scanf("%d",&num[i]);
        }
        qsort(num,3,sizeof(int),cmpfunc);
        a=num[0];
        b=num[1];
        c=num[2];
        if(a==b&&b==c){
            printf("0\n");
        }
        else{
             sum=0;
           if(b<c) {while(b<c){
                b++;
                a++;
                sum++;
            }}
            if(a<b){
                while(a<b){
                    a=a+2;
                    sum++;
                }
                if(a>b){
                    while(a>b){
                        b++;
                        c++;
                        sum++;
                    }
                }
            }

           printf("%d\n",sum);
        }
    }return 0;
} 