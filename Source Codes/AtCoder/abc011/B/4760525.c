#include <stdio.h>
#define max_len 15
void initArray(char a[], int len);
int retlen(char a[]);
void formatname(char a[], int len);
int main(void)
{
    char name[max_len];
    initArray(name, max_len);
    gets(name); 
    int len = retlen(name);
    formatname(name, len);
    puts(name);
    return 0;
}

void initArray(char a[], int len)
{
    for (int i = 0; i < len; i++)
    {
        a[i] = 0;
    }
}

int retlen(char a[])
{
    int len = 0;
    while (a[len] != 0)
    {
        len++;
    }
    return len;
}

void formatname(char a[], int len)
{
    int iter = 0;
    int change = 'a' - 'A';
    if (a[iter] >= 'a')
    {
        a[iter] -= change;
    }
    iter++;
    while (iter < len)
    {
        if (a[iter] < 'a')
        {
            a[iter] += change;
        }
        iter++;
    }
} 