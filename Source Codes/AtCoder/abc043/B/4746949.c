#include <string.h>
 
int main()
{
  char s[11], out[11]={'\0'};
  scanf("%s", s);
  int n = strlen(s);
  for(int i=0; i<n; i++){
    int m = strlen(out);
    if(s[i] == 'B') out[m-1]='\0';
    else out[m]=s[i];
  }
  printf("%s", out);
  return 0;
} 