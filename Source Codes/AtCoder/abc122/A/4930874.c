#include <stdio.h>

int main(){
  char input_data, output_data;
  scanf("%c", &input_data);

  if(input_data == 'A') output_data = 'T';
  else if(input_data == 'G') output_data = 'C';
  else if(input_data == 'C') output_data = 'G';
  else if(input_data == 'T') output_data = 'A';
  
  printf("%c\n", output_data);

  return 0;
} 