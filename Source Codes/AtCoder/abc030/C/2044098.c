#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int descending_compare(const void *a, const void *b){
    if (*(int*)a > *(int*)b){
        return -1;
    }else if (*(int*)a == *(int*)b){
        return 0;
    }else{
        return 1;
    }
}

int ascending_compare(const void *a, const void *b){
    if (*(int*)a < *(int*)b){
        return -1;
    }else if (*(int*)a == *(int*)b){
        return 0;
    }else{
        return 1;
    }
}


int lower_bound(int *a, int n, int key){
    int left, mid, right;
    left = 0, right = n;
    mid = (left + right)/2;
    while ((left+1 != mid || mid+1 != right) && mid != left){
        if (key > a[mid]){
            left = mid;
        }else{
            right = mid+1;
        }
        mid = (left + right)/2;
    }
    if (a[left] >= key)return left;
    if (a[mid] >= key)return mid;
    if (a[right] >= key)return right;
    return n;
}

//greatest common divisor
unsigned long  gcd(unsigned long x, unsigned long y){
    if (y == 0){ 
        return x;
    }else if (x > y){
        return gcd(y, x % y);
    }else{
        return gcd(x, y % x);
    }
}



long long factorial(int x){
    long long rtn = 1;
    int i;
    for (i = x; i > 1; i--){
        rtn = (rtn*i);
    }
    return rtn;
}
int a[100005];
int b[100005];


int main(void){
    int n, m, x, y;
    int now = 0;
    int cnt = 0;
    scanf("%d %d %d %d", &n, &m, &x, &y);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++){
        scanf("%d", &b[i]);
    }
    now = a[0];
    now += x;
    cnt++;
    while (1){
        if (cnt % 2 == 1){
            if (lower_bound(b, m, now) != m){
                now = b[lower_bound(b, m, now)];
                now += y;
                cnt++;
            }else{
                break;
            }
        }else{
            if (lower_bound(a, n, now) != n){
                now = a[lower_bound(a, n, now)];
                now += x;
                cnt++;
            }else{
                break;
            }
        }
    }

    printf("%d\n", cnt/2);

    
} 