#include<stdio.h>

int main(void)
{
  int a,b,c;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);

  if(a<b&&a<c){
    printf("3\n");
  }else if(a>b&&a>c){
    printf("1\n");
  }else{
    printf("2\n");
  }

  if(b<a&&b<c){
    printf("3\n");
  }else if(b>a&&b>c){
    printf("1\n");
  }else{
    printf("2\n");
  }

   if(c<b&&c<a){
    printf("3\n");
  }else if(c>b&&c>a){
    printf("1\n");
  }else{
    printf("2\n");
  }

   return 0;
} 