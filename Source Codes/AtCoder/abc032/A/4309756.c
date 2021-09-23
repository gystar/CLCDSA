#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a,const void *b){
  return *(int*)a - *(int*)b;
}

int main(void){
  int a,b,n,i;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&n);
  for(i=n;;i++){
    if((i%a==0) && (i%b==0)) break;
  }
  printf("%d\n",i);
  return 0;
} 