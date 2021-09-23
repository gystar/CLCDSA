#include <stdio.h>
int main(void){
    int e[6],b,l[6],i,j,ce=0,cb=0;
    for(i=0;i<6;i++){
        scanf("%d",&e[i]);
    }
    scanf("%d",&b);
    for(i=0;i<6;i++){
        scanf("%d",&l[i]);
    }
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(l[i]==e[j]) ce++;
        }
        if(l[i]==b) cb++;
    }
    if(ce<3) printf("0\n");
    else if(ce==3) printf("5\n");
    else if(ce==4) printf("4\n");
    else if(ce==5){
        if(cb==0) printf("3\n");
        else if(cb==1) printf("2\n");
    }
    else if(ce==6) printf("1\n");
    return 0;
} 