#include<stdio.h>

void run(void) {
  char C,c;
  scanf(" %c %c", &C, &c);
  if(C+32 == c)
    printf("Yes\n");
  else
    printf("No\n");
}
int main(){
  run();
  return 0;
} 