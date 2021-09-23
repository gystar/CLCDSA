#include <stdio.h>

int main() {
  int i, j;
  char board_1st[5];
  char board_2nd[5];
  char board_3rd[5];
  char board_4th[5];
  char dummy;
  scanf("%c %c %c %c", &board_1st[0], &board_1st[1], &board_1st[2], &board_1st[3]);
  scanf("%c", &dummy);
  scanf("%c %c %c %c", &board_2nd[0], &board_2nd[1], &board_2nd[2], &board_2nd[3]);
  scanf("%c", &dummy);
  scanf("%c %c %c %c", &board_3rd[0], &board_3rd[1], &board_3rd[2], &board_3rd[3]);
  scanf("%c", &dummy);
  scanf("%c %c %c %c", &board_4th[0], &board_4th[1], &board_4th[2], &board_4th[3]);

  printf("%c %c %c %c\n", board_4th[3], board_4th[2], board_4th[1], board_4th[0]);
  printf("%c %c %c %c\n", board_3rd[3], board_3rd[2], board_3rd[1], board_3rd[0]);
  printf("%c %c %c %c\n", board_2nd[3], board_2nd[2], board_2nd[1], board_2nd[0]);
  printf("%c %c %c %c\n", board_1st[3], board_1st[2], board_1st[1], board_1st[0]);
  return 0;
} 