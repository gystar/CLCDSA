#include <stdio.h>
int main(){
char a[50],b[50];
	scanf("%s%s",&a,&b);
  if (strlen(a)>strlen(b)){
	printf ("%s\n",&a);
  }
  else{
  printf ("%s\n",&b);
  }
  return 0;
	} 