#include<stdio.h>
int main(){
  int n,i;
  char c;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%c",&c);
    if(c=='Y'){
      c=0;
      break;
    }
  }
  puts(c?"Three":"Four");
} 