#include<stdio.h>
char *P[]={"Yes", "No"};
char f;
short n;
int main(){
  scanf("%hd", &n);
  switch(n){
    case 1: case 2: case 3: case 5: case 6: case 9: case 10: case 13: case 17:
      f=1;
  }
  puts(P[f]);
} 