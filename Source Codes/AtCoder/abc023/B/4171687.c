#include<stdio.h>

int main(){
  int n, N, len = 0, flag = 1, j, count = 0;
  char s[101];
  
  scanf("%d", &n);
  N = n;
  scanf("%s", &s);
  
  if(n%2 == 0){
    flag = 0;
  } else {
    while(N >= 1){
      j = N%3;
      if(j == 0){
        if(s[count] != 'a' || s[n - count - 1] != 'c'){
          flag = 0;
          break;
        }
      } else if(j == 1){
        if(s[count] != 'b' || s[n - count - 1] != 'b'){
          flag = 0;
          break;
        }
      } else if(j == 2){
        if (s[count] != 'c' || s[n - count - 1] != 'a'){
          flag = 0;
          break;
        }
      }
      N = N - 2;
      count++;
    }
  }
    
  if(flag == 0){
    printf("-1\n");
  } else {
    printf("%d\n", count - 1);
  }
    
    return 0;
} 