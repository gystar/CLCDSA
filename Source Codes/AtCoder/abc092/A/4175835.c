#include<stdio.h>

int main() {
int a, b, c, d;
scanf ("%d", &a);
scanf ("%d", &b);
scanf ("%d", &c);
scanf ("%d", &d);
if (a>=b){
    a=b;
}
if (c>=d){
    c=d;
}
printf ("%d", a+c);
return 0;
} 