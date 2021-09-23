#include <stdio.h>

int main(){

    int n = 0;
    int m = 0;
    int x = 0;
    int y = 0;
    int buf;
    int bufxn = -101;
    int bufym = 101;

    int ans = 0;

    scanf("%d%d%d%d",&n,&m,&x,&y);


    for (int i = 0; i < n; i++) {
        scanf("%d", &buf);
        if (buf > bufxn) {
            bufxn = buf;
        }
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", &buf);
        if (buf < bufym) {
            bufym = buf;
        }
    }

    if (x < y) {
        if (bufxn < y) {
            if (x < bufym) {
                if (bufxn < bufym) {
                    ans = 1;
                }
            }
        }
    }


    if (ans == 1) {
        printf("No War");
    } else {
        printf("War");
    }
    
    return 0; 
    
	
} 