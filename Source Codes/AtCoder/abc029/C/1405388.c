#include <stdio.h>
int n;
char a[10];
int print(int i){
    if(i==n){printf("%s\n",a);
        return 0;
    }
    a[i]='a';
    print(i+1);
    a[i]='b';
    print(i+1);
    a[i]='c';
    print(i+1);
    return 1;
}
int main(void){
    scanf("%d",&n);
    print(0);
    return 0;
} 