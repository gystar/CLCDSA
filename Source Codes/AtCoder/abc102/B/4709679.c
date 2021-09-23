#include<stdio.h>
#include<math.h>

int main(void){
    int n,min=pow(10,9),max=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
        if(a[i]>max){
            max=a[i];
        }
    }

    printf("%d\n",max-min);
    return 0;

} 