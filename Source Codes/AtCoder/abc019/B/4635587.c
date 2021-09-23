#include <stdio.h>
int main (){
char s[1001];
  scanf ("%s",s);
  int i,k=1;
  for (i=0;s[i]!=0;i++){
  if (s[i]==s[i+1]){
    k++;
  }
    else {
    printf ("%c%d",s[i],k);
      k=1;
    }
  }
  printf ("\n");
  return 0;
} 