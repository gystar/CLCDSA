#include <stdio.h>
#include <string.h>
int main(){
  char s1[11], s2[11], s3[11];

  scanf("%s%s%s", s1, s2, s3);

  printf("%c%c%c", s1[0]+('A' - 'a'), s2[0]+('A' - 'a'), s3[0]+('A' - 'a') );
  printf("\n");
  
} 