#include <stdio.h>

int abs(int n){
  if(n >= 0){
    return n;
  }
  else{
    return -n;
  }
};

int
main(int argc, char *argv[])
{
  long int integer;
  scanf("%ld", &integer);

  int X[8];
  int j = 0;

  while(integer >= 100){
    X[j] = integer % 1000;
    integer /= 10;
    j++;
  }

  int m = 1000;

  for(int i = 0; i < j; i++){
    if(m > abs(X[i] - 753)){
      m = abs(X[i] - 753);
    }
  }

  printf("%d\n", m);

  return 0;
} 