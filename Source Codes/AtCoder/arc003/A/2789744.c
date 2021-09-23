#include <stdio.h>
int main() {
int a, b, i = 0;
char x[100];
scanf("%d", &a);
scanf("%s", x);
while (x[i]) {
if (x[i] == 'A') {
b = b + 4;
} else if (x[i] == 'B') {
b = b + 3;
} else if (x[i] == 'C') {
b = b + 2;
} else if (x[i] == 'D') {
b = b + 1;
} else if (x[i] == 'F') {
b = b + 0;
} i++;
} printf("%.14f\n", (double)b / a);
return 0;
} 