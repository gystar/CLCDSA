#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLEN 100000
void run();

int main(int argc, char const *argv[]) {
  run();
  return 0;
}

void run(){
  int n;
  int T;
  scanf("%d%d", &n, &T);
  long price[n];
  for(int i = 0; i < n; i++){
    scanf("%ld", &price[i]);
  }
  //search point???
  int sp[n];
  sp[0] = 0;
  int tmin = price[0];
  for(int i = 1; i < n; i++){
    if(price[i] < tmin){
      sp[i] = i;
      tmin = price[i];
    }else{
      sp[i] = sp[i-1];
    }
  }
  int count = 0;
  int benefit = 0;
  long hp = 0;
  for(int i = n - 1; i > 0; i--){
    if(price[i] > hp){
      hp = price[i];
      long b = price[i] - price[sp[i-1]];
      if(b == benefit){
        count++;
      }else if(b > benefit){
        count = 1;
        benefit = b;
      }
    }
  }
  printf("%d\n", count);
} 