#include <stdio.h>
int main (){
int i=0,k=0,a,b;
char s[20];
  scanf ("%d%d%s",&a,&b,s);
  for (i=0;s[i]!=0;i++){
  if (i!=a && s[i]<'9'+1 && s[i]>'0'-1){
  ;
  }
  else if (i==a && s[i]=='-'){
    ;
  }
    else {
      k++;
    break;
    }
  }
  if (k==0){
  printf ("Yes");
  }
  else {
  printf ("No");
  }
return 0;
} 