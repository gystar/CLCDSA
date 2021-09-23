#include<stdio.h>
int main (){
int a;
  scanf ("%d",&a);
  if (a==100){
  printf ("Perfect\n");
  }
  else if (a>89 && a<100){
  printf ("Great\n");
  }
  else if (a>59 && a<90){
  printf ("Good\n");
  }
  else if (a<60){
  printf ("Bad\n");
  }
return 0;
} 