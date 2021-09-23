#include <stdio.h>
#include <string.h>
int main(){
  char w[31];
  scanf("%s",w);
  for (int i=0;i<strlen(w);i++){
    if (w[i]=='a' || w[i]=='e' || w[i]=='i' || w[i]=='o' || w[i]=='u');
    else printf("%c",w[i]);
  }
  printf("\n");
} 