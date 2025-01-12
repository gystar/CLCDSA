#include <stdio.h>

inline void pll(int a, int b){
    char c[14];
    c[13]=' ';
    int i=12;
    do{ c[i]=b%10+48; b/=10; i--; }while(b>0);
    c[i]=' '; i--;
    do{ c[i]=a%10+48; a/=10; i--; }while(a>0);
    if(__builtin_expect(stdout->_IO_write_ptr+14 >= stdout->_IO_write_end,0)){
        fflush_unlocked(stdout);
    }
    for(i++;i<14;i++){
        *stdout->_IO_write_ptr++ = c[i];
    }
}

static void solve(const int n, const int a, const int b, int mask, const int common){
    if(n==1){
        pll(common|a, common|b);
    }else{
        const int t = a^b;
        const int d = t&(-t);
        mask ^= d;
        const int aa = a & mask, ab = aa ^ (mask&(-mask));
        solve(n-1, aa, ab, mask, common|(a&d));
        solve(n-1, ab, b&mask, mask, common|(b&d));
    }
}

int main(void){
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    if(__builtin_parity(a)==__builtin_parity(b)){
        puts("NO");
    }else{
        puts("YES");
        solve(n, a, b, -1, 0);
    }
    return 0;
} 