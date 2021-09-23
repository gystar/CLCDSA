#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input(int *n, double x[], int u[]);
 
int main(int argc, char *argv[]){
  int n;
  double sum = 0;
  char cx[128], cu[3], *endptr;

  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    scanf("%s %s", cx, cu);

    if(cu[0] == 'J'){
      sum += strtol(strtok(cx, " "), &endptr, 10);
    }
    else{
      sum += 380000.0 * strtod(strtok(cx, " "), &endptr);
    }
  }

  printf("%lf\n", sum);
 
  return 0;
}

/////////////////////////////////////////////////////////////////////////

void input(int *n, double x[], int u[]){
} 