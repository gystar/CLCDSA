#include <stdio.h>

int main(){
    char a[50],b[50];
    int alen=0,blen=0;
    scanf("%s %s",&a,&b);
    for (int i=0;i<50;i++){
        if (a[i]!='\0'){
            alen++;
        }
        else{
            break;
        }
        if (b[i]!='\0'){
            blen++;
        }
        else{
            break;
        }
    }
    if (alen>blen){
        printf("%s",a);
    }
    else{
        printf("%s",b);
    }
    return 0;
} 