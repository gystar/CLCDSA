#include <stdio.h>

int main(void)
{
    char s[100001];
    int n, q;
    int l, r;

    int i, j;
    int num[100001];

    scanf("%d %d", &n, &q);
    scanf("%s", s);

    num[0] = 0;
    for(i=1;i<n;i++){
        if(s[i] == 'C'){
            if(s[i-1] == 'A'){
                num[i] = num[i-1] + 1;
            }else{
                num[i] = num[i-1];
            }
        }else{
            num[i] = num[i-1];
        }
    }

    for(i=0;i<q;i++){
        scanf("%d %d", &l, &r);
        printf("%d\n", num[r-1] - num[l-1]);
    }

    return 0;
} 