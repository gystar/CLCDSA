#include<stdio.h>
#include<string.h>

int main(void)
{
  char str[1001];
  int i,j;
  int n;
  int count=0;

  scanf("%s",str);
  
  for(i=0;strlen(str)>i;i++){
    for(j=0;strlen(str)>j;j++){
      if(str[i]==str[i+j]){
	count++;
      }else{
	break;
      }
      
    }
    printf("%c%d",str[i],count);
    i=i+j-1;
    count=0;
  }

  printf("\n");

  return 0;
} 