#include<stdio.h>
short A, B, D, ans;
short pon[10]={0, 1, 2, 3, 2, 1, 2, 3, 3, 2};
int main(){
  scanf("%hd%hd", &A, &B);
  D=A<B?B-A:A-B;
  printf("%d\n", D/10+pon[D%10]);
} 