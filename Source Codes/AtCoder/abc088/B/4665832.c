#include<stdio.h>

 


int main(void){
    int n;
    scanf("%d",&n);
    int a[n],b=0,c=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);   
    }
    for(int d=0;d<n;d++){
        for(int j=0;j<n-1;j++){
            if(a[j]<a[j+1]){
                int e;
                e=a[j];
                a[j]=a[j+1];
                a[j+1]=e;
            }

        }
    }

    for(int i=0;i<n;i++){
        if(i%2==0){
            b=b+a[i];
        }else{
            c=c+a[i];
        }
    }

        
    printf("%d",b-c);



    
    return 0;
} 