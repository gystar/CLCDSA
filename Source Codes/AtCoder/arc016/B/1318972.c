#include<stdio.h>
 
int main(){
 
  int i,j;
  int num;
  int count=0;
  char map[100][10];
 
  scanf("%d",&num);
 
  for(i=0;i<num;i++)
    scanf("%s",map[i]);
 
  for(i=0;i<num;i++)
    for(j=0;j<10;j++){
      if(map[i][j]=='x'){
         count++;
      } else if(map[i][j]=='o' && map[i-1][j]!='o'){
          count++;
      }
 
    }
  /*
  for(i=0;i<num;i++,putchar('\n'))
    for(j=0;j<10;j++){
      printf("%d",map[i][j]);
    }
  */
 
  printf("%d\n",count);
  return 0;
 
} 