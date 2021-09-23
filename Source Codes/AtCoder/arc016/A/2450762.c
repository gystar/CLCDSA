#include<stdio.h>
int main(void){

  int a, ans;

  scanf("%d", &a); scanf("%d", &ans);

    if (ans != a) {
      printf("%d", a);
    }else{
      printf("%d", a - 1);
    }
} 