#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a,const void *b){
  return *(int*)a - *(int*)b;
}

int main(void){
  int x,y;
  scanf("%d%d",&x,&y);
  if(x>y)printf("Worse\n");
  else printf("Better\n");
  return 0;
} 