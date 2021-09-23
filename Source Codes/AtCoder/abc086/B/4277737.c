#include<stdio.h>
#include<math.h>

int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  b+=a*(10+(b/10>0)*90+(b/100)*900);
  puts(sqrt(b)-(int)sqrt(b)?"No":"Yes");
} 