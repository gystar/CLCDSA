#include <stdio.h>
#define max_len 115
void initArray(char a[], int len);
int retlen(char a[]);
int main(void)
{
    char s[max_len];
    initArray(s, max_len);
    gets(s); 
    int len = retlen(s);

    char count[6];
    initArray(count, 6);
    for(int i = 0; i < len;i++)
    {
        count[s[i] - 'A']++;
    }
    for(int i = 0; i < 6; i++)
    {
        printf("%d",count[i]);
        if(i != 5){
            printf(" ");
        }
    }
    puts("");
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