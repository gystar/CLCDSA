#include <stdio.h>

int main(){
  char input_data, output_data[128];
  output_data['A'] = 'T';
  output_data['G'] = 'C';
  output_data['C'] = 'G';
  output_data['T'] = 'A';

  scanf("%c", &input_data);

  printf("%c\n", output_data[input_data]);

  return 0;
} 