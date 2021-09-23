#include<stdio.h>

int main(void){
  int num, i, count=0, count_M=0;
  char Word[11];
  scanf("%s", &Word);
  for(num=0; Word[num]!=NULL; num++) {
      if(Word[num] == 'A' ||Word[num] == 'C' || 
         Word[num] == 'G' ||Word[num] == 'T') count++;
      else {
        if(count_M < count) { 
	    	count_M = count;
        }        
      	count = 0;
      }
  }
  if(count_M < count){
    count_M = count;
  }
  printf("%d",count_M);
  return 0;
} 