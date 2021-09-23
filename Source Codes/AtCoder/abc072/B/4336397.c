#include <stdio.h>
int main (){
char s[100000];
scanf ("%s",s);
  if (strlen(s)%2==0){
for (int i=0;i<strlen(s)/2;i++){
printf ("%c",s[2*i]);
}
  }
  else{
  for (int i=0;i<(1+strlen(s))/2;i++){
printf ("%c",s[2*i]);
}
  }
return 0;
} 