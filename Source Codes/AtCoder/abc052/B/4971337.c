#include <stdio.h>
#include <string.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    char s[n+1];;
    int max=0,i=0,ans=0;
    scanf("%s", s);
    while(strncmp(&s[i], "\0", 1)!=0)
    {
        if(strncmp(s+i, "I", 1)==0)
        {
            ans++;
            if(ans>max) max=ans;
        }
        else ans--;
        i++;
    }
    printf("%d", max);
    return 0;
} 