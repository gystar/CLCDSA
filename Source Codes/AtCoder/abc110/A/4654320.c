#include<stdio.h>
void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void sort(int num[3]){
    if(num[1] > num[0]){
        swap(num, num+1);
    }
    if(num[2] > num[0]){
        swap(num, num+2);
    }
}
int main(){
    int num[3];
    scanf("%d %d %d", num, num+1, num+2);
    sort(num);
    printf("%d\n", num[0] * 10 + num[1] + num[2]);
    return 0;
} 