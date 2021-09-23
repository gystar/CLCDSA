#include <stdio.h>
    #include <string.h>
     
    int main(void)
    {
            int a=0, b=0, c, i;
            char n[99999];
     
            scanf("%s", n);
     
            a = strlen(n);
     
            for(i=0;i<a;i++) {
                    if(n[i]=='0') b++;
                    else c++;
            }
     
            if(b>c) printf("%d\n", c*2);
            else printf("%d\n", b*2);
     
            return 0;
    } 