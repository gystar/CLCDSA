#include <stdio.h>
int main(void){
  char a[51],b[51];
  int i=0;
  int j=0;
  scanf("%s",a);
  scanf("%s",b);
  while(a[i]!='\0'){
    i++;
  }
  while(b[j]!='\0'){
    j++;
  }
  if(i>j) printf("%s\n",a);
  if(i<j) printf("%s\n",b);
  return 0;
} 