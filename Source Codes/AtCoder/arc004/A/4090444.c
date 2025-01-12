#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

#define REP(i,n) for(i=0;i<n;i++)

int iin() {
    int i;
    scanf("%d", &i);
    return i;
}

long long llin() {
    long long i;
    scanf("%lld", &i);
    return i; 
}

double din() {
    double i;
    scanf("%lf", &i);
    return i;
}

char chin() {
    char c;
    scanf("%c", &c);
    return c;
}

void stin(char *s) {
    scanf("%s", s);
}

void iout(int i) {
    printf("%d\n", i);
}

void llout(long long i) {
    printf("%lld\n", i);
}

void dout(double i) {
    printf("%lf\n", i);
}

void chout(char c) {
    printf("%c\n", c);
}

void stout(char *s) {
    printf("%s\n", s);
}

#define SQ(n) ((n)*(n))

long long max(long long a, long long b) {
    return a>b ? a : b;
}

int main() {
    int i, j;
    int n = iin(), x[100], y[100];
    long long maxNum = 0;
    REP(i, n) {
        x[i] = iin();
        y[i] = iin();
    }
    REP(i, n-1) {
        for(j = i+1; j < n; j++) {
            maxNum = max(maxNum, SQ(x[i] - x[j]) + SQ(y[i] - y[j]));
        }
    }
    
    dout(sqrt(maxNum));
    return 0;
} 