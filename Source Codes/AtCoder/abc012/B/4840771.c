#include <stdio.h>

int main() {
  int seconds_input, hours, minutes, seconds;
  scanf("%d", &seconds_input);
  hours = seconds_input / 3600;
  minutes = (seconds_input % 3600) / 60;
  seconds = seconds_input % 60;
  printf("%02d:%02d:%02d\n", hours, minutes, seconds);
  return 0;
} 