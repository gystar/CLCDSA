#include <stdio.h>
#include <string.h>

int main(void)
{

  char d[11];
  scanf("%s",d);
  if(strcmp(d,"2019/04/30")<=0)
        printf("Heisei\n");
  else
        printf("TBD\n");
  return 0;
} 