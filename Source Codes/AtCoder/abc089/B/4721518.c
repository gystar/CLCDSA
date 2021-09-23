#include<stdio.h>
int main()
{
  int n, x=0, i;
  char m;
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%c", &m);
    if(m=='Y'){
      x+=1;
    }
  }
  if(x==0){
    printf("Three\n");
  }else{
    printf("Four\n");
  }
  return 0;
} 