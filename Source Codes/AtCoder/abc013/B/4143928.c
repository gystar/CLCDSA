#include <stdio.h>
int main(){
    int a,b,c;
    scanf ("%d",&a);
    scanf ("%d",&b);
    if(a-b>0){   
        c=a-b;
    }else{
        c=b-a;
    }
    if(c>5){           
        c=10-c;
    }   
    printf ("%d\n",c);
    return 0;
} 