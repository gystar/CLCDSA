#include <stdio.h>
void swap(int,int);
int num[] = {1,2,3,4,5,6};
int main(void){
    int n;
    scanf("%d",&n);
    n %= 30;
    for(int i=0;i<n;i++)
        swap(i%5,i%5+1);
    for(int i=0;i<6;i++)
        printf("%d",num[i]);
    printf("\n");
}
void swap(tmp,w){
    int x;
    x = num[tmp];
    num[tmp] = num[w];
    num[w] = x;
} 