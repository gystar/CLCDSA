#include<stdio.h>

int main(void){
  char str[100001];
  scanf("%100000s",str);
  int i,j,k,l;
  int table[26];
  int num=0;
  int ans;


  for(l=0;str[l]!='\0';l++){
  }


  for(i=0;i<l;i++){
   if (str[i] >= 97 && str[i] <= 122){
      table[(int)str[i]-97]++;
    }
  }

  for(j=0;j<26;j++){
    if(table[j]%2){
      num++;
    }
  }

  if(num){
    ans=2*((l-num)/(2*num))+1;
  }else{
    ans=l;
  }

  
  
  printf("%d\n",ans);
  return 0;
} 