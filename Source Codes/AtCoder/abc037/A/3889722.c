#include<stdio.h>

int min(int a, int b){
        int ans;
        if (a > b) ans = b;
        else ans = a;

        return ans;
}


int main(void){
        int a, b, c;
        scanf("%d %d %d",&a, &b, &c);

        printf("%d\n", c / min(a,b));

        return 0;
} 