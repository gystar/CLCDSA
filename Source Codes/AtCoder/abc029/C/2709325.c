#include <stdio.h>

char pass[10];

int N;

int showpass(int i)
{
    if(i == N) {
        printf("%s\n", pass);
        return 0;
    }
    else {
        pass[i] = 'a';
        showpass(i+1);
        pass[i] = 'b';
        showpass(i+1);
        pass[i] = 'c';
        showpass(i+1);
    }
}

int main(void)
{
    scanf("%d", &N);

    showpass(0);

    return 0;
} 