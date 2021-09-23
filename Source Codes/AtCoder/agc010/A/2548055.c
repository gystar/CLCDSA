#include<stdio.h>
int main(void){
  int odd=0 ,n,i;
  scanf("%d",&n);
  int a[n];
  for(i = 0; i < n ;i++){
    scanf("%d",&a[i]);
    if(a[i] % 2 != 0){
      odd ++;
    }
  }
  if(odd % 2 == 0){
    printf("YES");
  }else{
    printf("NO");
  }
  return 0;
} 