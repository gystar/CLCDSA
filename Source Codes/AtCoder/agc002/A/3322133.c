#include <stdio.h>

int ia, ib, ps;

void read(void)
{
    scanf("%d %d", &ia, &ib);
}

void exec(void)
{
    ps = (ia > 0) ? 1 : ((ib < 0) ? 2 * ((ib - ia) % 2) - 1 : 0);
}

void print(void)
{
    printf("%s\n", ps < 0 ? "Negative" : (ps > 0 ? "Positive" : "Zero"));
}

void repl(void)
{
    read();
    exec();
    print();
}

int main(void)
{
    repl();
    return 0;
} 