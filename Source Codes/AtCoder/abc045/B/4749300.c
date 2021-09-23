#include <stdio.h>

int main()
{
  char a[100], b[100], c[100];
  int ia=0, ib=0, ic=0;
  scanf("%s %s %s", a,b,c);
  
  char ans,index = 'a';
  while(index != '\0'){
    if(index == 'a'){
      index = a[ia];
      ans = 'A';
      ia++;
    }
    else if(index == 'b'){
      index = b[ib];
      ans = 'B';
      ib++;
    }
    else if(index == 'c'){
      index = c[ic];
      ans = 'C';
      ic++;
    }  
  }
  printf("%c", ans);
  return 0;
} 