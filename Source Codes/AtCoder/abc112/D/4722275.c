#include <stdio.h>
#include <stdlib.h>

typedef char                SINT8;
typedef unsigned char       UINT8;
typedef short               SINT16;
typedef unsigned short      UINT16;
typedef int                 SINT32;
typedef unsigned int        UINT32;
typedef long long           SINT64;
typedef unsigned long long  UINT64;

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(a) ((a)>(0)?(a):-(a))


SINT32 main() {
    SINT32 n,m;
    scanf("%d%d",&n,&m);

    SINT32 ans = -1;

    if (n == 1) {
        ans = m;
    } else {

        for (int i = 1; (i*n) < m+1 ; i++) {

            if ((m % i) == 0) {

                if ((m / i) >= n) {
                    ans = i;
                } else {
                    break;
                }
            }
        }
    }


    printf("%d\n",ans);
	return 0;
} 