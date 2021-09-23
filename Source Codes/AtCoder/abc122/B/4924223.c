#include <stdio.h>

int main()
{
    int i, j = 0, count[10];
    
    for (i=0;i<10;i++) {
        count[i] = 0;
    }
    
    char s[10];
    
    scanf("%s",s);
    
    for (i=0;i<10;i++) {
        if (s[i] == 'A' || s[i] == 'T' || s[i] == 'G' || s[i] == 'C') {
            count[j]++;
        } else {
            j++;
        }
    }
    
    int max = 0;
    
    for (i=0;i<10;i++) {
        if (max < count[i]) max = count[i];
    }
    
    printf("%d\n",max);
    
    return 0;
} 