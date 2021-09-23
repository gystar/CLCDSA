#include<stdio.h>
int main (){
int a,b;
scanf ("%d%d",&a,&b);
  if (a==2 || b==2){
  printf ("No");
  }
  else {
  if (a==4 || a==6 || a==9 || a==11){
  if (b==4 || b==6 || b==9 || b==11){
  printf ("Yes");
  }
  else {printf ("No");}
  }
  else{
  if(b==4 || b==6 || b==9 || b==11){
  printf ("No");
  }
    else{
    printf ("Yes");
    }
  }
  }
return 0;
} 