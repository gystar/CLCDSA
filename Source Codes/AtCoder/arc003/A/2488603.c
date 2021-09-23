#include<stdio.h>
int main(void){
  int a ,i;
  double sum = 0;
  scanf("%d", &a);

    if(a == 0){
      printf("0");
    }else{
      char x[a];
        scanf("%s",x);

  for(i = 0; i < a ; i++){

    switch (x[i]) {
      case 'A': sum += 4; break;
      case 'B': sum += 3; break;
      case 'C': sum += 2; break;
      case 'D': sum += 1; break;
      case 'F': break;
    }
  }
  printf("%.10f\n",sum / a);
}
} 