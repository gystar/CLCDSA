#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int temp;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }


    int total=0;

    for(int i=0;i<n;i++){
        total=total+a[i];
    }

    total=total-(a[n-1]/2);
    printf("%d\n",total);
    return 0;
} 