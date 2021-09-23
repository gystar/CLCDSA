#include <stdio.h>
#include <string.h>
int main() {
  int a;
  int b;
  int age;
  scanf("%d",&age);
  if (age == 1)	{
    printf("Hello World\n");
  } else {
    scanf("%d %d",&a,&b);
    printf("%d\n",a+b);
  }
  return 0;
} 