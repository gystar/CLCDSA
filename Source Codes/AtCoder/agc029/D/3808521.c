#include <stdio.h>
#include <string.h>
typedef unsigned int uint;

inline static uint gl(void){
    uint x = 0;
    for(;;){
        const uint c = getchar_unlocked() - 48;
        if(c < 10){
            x = x*10 + c;
        }else{
            break;
        }
    }
    return x;
}

#define H 200000
uint v[H] __attribute__((aligned(64)));
int main(void){
    memset(v, 0x33, sizeof(uint)*H);
    {
        const uint h = gl();
        gl();
        const uint n = gl();
        for(uint i=0; i<n; i++){
            const uint x = gl()-1;
            const uint y = gl()-1;
            v[x] = y<v[x] ? y : v[x];
        }
        v[h] = 0;
    }
    {
        uint right = 0;
        for(uint x=1; ; x++){
            const auto b = v[x];
            const auto r = right+1;
            if(b<r){
                printf("%d\n", x);
                return 0;
            }else if(b>r){
                right=r;
            }
        }
    }
    return 0;
} 