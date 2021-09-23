#include<stdio.h>
int main(void)
{
int a, b, c, n;
scanf("%1d %1d %1d", &a, &b, &c);
n=a-c;
if(n==0){
  printf("Yes");
}else{
  printf("No");
}
return 0;
} 