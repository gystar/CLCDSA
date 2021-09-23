#include<stdio.h>
int main(void)
{
int a, b, c, d;
scanf("%1d %1d %1d %1d", &a, &b, &c, &d);
if(a==b&&b==c&&c==d){
  printf("SAME\n");
}else{
  printf("DIFFERENT\n");
}
return 0;
} 