#include <stdio.h>
#include <string.h>
int main(void)
{
    char a;
    scanf("%c", &a);
    if(strncmp(&a, "a", 1)==0||strncmp(&a, "i", 1)==0||strncmp(&a, "u", 1)==0||strncmp(&a, "e", 1)==0||strncmp(&a, "o", 1)==0)
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }
    return 0;
    
} 