#include <stdio.h>
long ans[3] = {-1, -1, -1};

// ?????
int solve_equation(long population, int Legs) {
    int adults, olds, babys, legs;
    for (olds = 0; olds <= 1; olds++) {
        for (adults = 0; adults <= population-olds; adults++) {
            babys = population-(adults+olds);
            legs = 2*adults + 3*olds + 4*babys;
            if (legs == Legs) {
                ans[0] = adults; ans[1] = olds; ans[2] = babys;
                return 0;   // ??
            }
        }
    }
    return -1;  // ??
}


int main(int argc, char const *argv[]) {
    // ??
    long population;
    long legs;
    // ??
    scanf("%ld", &population );
    scanf("%ld", &legs );
    // ??
    if (solve_equation(population, legs)) {
        printf("%ld %ld %ld\n", ans[0], ans[1], ans[2] );
    } else {
        printf("%ld %ld %ld\n", ans[0], ans[1], ans[2] );
    }
    return 0;
} 